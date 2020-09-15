#include "RcppArmadillo.h"
#include "utilities.h"
#include <cmath>

/* SRC FUNCTIONS FOR SPECTRAL CLUSTERING
 * (01) 2015 : Little and Byrd
 * (02) cpp_scNJW : Ng, Jordan, Weiss       (2002)
 * (03) cpp_scSM  : Shi and Malik           (2000)
 * (04) cpp_scUL  : Unnormalized Laplacian
 * (05) cpp_sc05Z : Zelnik-Manor and Perona (2005)
 * (06) cpp_sc09G : Gu and Wang             (2009)
 * (07) cpp_sc10Z : Zhang et al.            (2010)
 */

// [[Rcpp::depends(RcppArmadillo)]]

using namespace Rcpp;
using namespace arma;
using namespace std;

// (01) 2015 : Little and Byrd =================================================
// [[Rcpp::export]]
arma::mat sc_2015LB_commute(arma::mat& D, int K){
  int N = D.n_rows;
  
  arma::vec distK(N,fill::zeros);
  arma::vec distn(N,fill::zeros);
  for (int n=0; n<N; n++){
    distn = arma::sort(D.col(n), "ascend");
    distK(n) = distn(K);
  }
  
  arma::mat myW(N,N,fill::zeros);
  for (int i=0; i<(N-1); i++){
    for (int j=(i+1); j<N; j++){
      myW(i,j) = std::exp(-(D(i,j)*D(i,j))/(distK(i)*distK(j)));
      myW(j,i) = myW(i,j);
    }
  }
  arma::mat myD = arma::diagmat(arma::sum(myW,1));
  arma::mat myL = myD-myW;
  arma::mat myLinv = arma::pinv(myL);
  double valD = arma::accu(myD);
  
  arma::mat output(N,N,fill::zeros);
  for (int i=0; i<(N-1); i++){
    for (int j=(i+1); j<N; j++){
      output(i,j) = std::sqrt(valD*(myLinv(i,i)+myLinv(j,j)-(2.0*myLinv(i,j))));
      output(j,i) = output(i,j);
    }
  }
  return(output);
}

// (02) scNJW : Ng, Jordan, Weiss (2002) =======================================
// [[Rcpp::export]]
Rcpp::List cpp_scNJW(arma::mat& D, int K, double sigma, bool usekmeans, int maxiter){
  // prepare
  int N = D.n_rows;
  
  // compute laplacian with zero diagonals
  arma::mat A = arma::exp(-(D%D)/(sigma*sigma));
  A.diag().fill(0.0);
  
  // run the clustering
  return(sc_normalNJW(A, K, usekmeans, maxiter));
}

// (03) cpp_scSM  : Shi and Malik     (2000) ===================================
// [[Rcpp::export]]
Rcpp::List cpp_scSM(arma::mat& D, int K, double sigma, bool usekmeans, int maxiter){
  // prepare
  int N = D.n_rows;
  
  // compute laplacian with zero diagonals
  arma::mat A = arma::exp(-(D%D)/(sigma*sigma));
  A.diag().fill(0.0); 
  
  // run the clustering
  return(sc_normalSM(A, K, usekmeans, maxiter));
}

// (04) cpp_scUL  : Unnormalized Laplacian =====================================
// [[Rcpp::export]]
Rcpp::List cpp_scUL(arma::mat& D, int K, double sigma, bool usekmeans, int maxiter){
  // prepare
  int N = D.n_rows;
  
  // compute laplacian with zero diagonals
  arma::mat A = arma::exp(-(D%D)/(sigma*sigma));
  A.diag().fill(0.0); 
  
  // step 3. run the clustering 
  return(sc_unnormalized(A, K, usekmeans, maxiter));
}

// (05) cpp_sc05Z : Zelnik-Manor and Perona (2005) =============================
// [[Rcpp::export]]
Rcpp::List cpp_sc05Z(arma::mat& D, int K, int nnbd, bool usekmeans, int maxiter){
  // prepare
  int N = D.n_rows;
  
  // find nnbd-th nearest distance
  arma::vec dist_nnbd(N,fill::zeros);
  arma::vec dist_tmp(N,fill::zeros);
  for (int n=0; n<N; n++){
    dist_tmp     = arma::sort(D.col(n), "ascend");
    dist_nnbd(n) = dist_tmp(nnbd);
  }
  
  // compute laplacian
  arma::mat A(N,N,fill::zeros);
  for (int i=0; i<(N-1); i++){
    for (int j=(i+1); j<N; j++){
      A(i,j) = std::exp(-(D(i,j)*D(i,j))/(dist_nnbd(i)*dist_nnbd(j)));
      A(j,i) = A(i,j);
    }
  }
  
  // compute with NJW
  return(sc_normalNJW(A, K, usekmeans, maxiter));
}

// (06) cpp_sc09G : Gu and Wang             (2009) =============================
// [[Rcpp::export]]
Rcpp::List cpp_sc09G(arma::mat& D, int K, int nnbd, bool usekmeans, int maxiter){
  // prepare
  int N = D.n_rows;

  // find nnbd-th nearest distance
  arma::vec dist_nnbd(N,fill::zeros);
  arma::vec dist_tmp(N,fill::zeros);
  for (int n=0; n<N; n++){
    dist_tmp     = arma::sort(D.col(n), "ascend");
    dist_nnbd(n) = arma::mean(dist_tmp.subvec(1, nnbd));
  }
  
  // compute laplacian
  arma::mat A(N,N,fill::zeros);
  for (int i=0; i<(N-1); i++){
    for (int j=(i+1); j<N; j++){
      A(i,j) = std::exp(-(D(i,j)*D(i,j))/(dist_nnbd(i)*dist_nnbd(j)));
      A(j,i) = A(i,j);
    }
  }
  
  // compute with NJW
  return(sc_normalNJW(A, K, usekmeans, maxiter));
}

// (07) cpp_sc10Z : Zhang et al.            (2010) =============================
// [[Rcpp::export]]
Rcpp::List cpp_sc10Z(arma::mat& D, int K, bool usekmeans, int maxiter){
  // prepare
  int N = D.n_rows;
  
  // calculate similarity matrix
  double meand = arma::accu(D)/static_cast<double>((N*(N-1)/2));
  arma::mat matP(N,N,fill::zeros);
  for (int i=0;i<N;i++){
    matP.col(i) = meand/arma::sort(D.col(i));
  }
  matP = matP%arma::trans(matP);
  
  // compute adjacency
  arma::mat matA(N,N,fill::zeros);
  for (int i=0;i<(N-1);i++){
    for (int j=(i+1);j<N;j++){
      matA(i,j) = std::exp(-((D(i,j)*D(i,j))/(2.0*matP(i,j))));
      matA(j,i) = matA(i,j);
    }
  }
  
  // run the clustering
  return(sc_normalNJW(matA, K, usekmeans, maxiter));
}
  