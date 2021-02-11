// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// src_pcm
arma::mat src_pcm(arma::imat& clmat);
RcppExport SEXP _T4cluster_src_pcm(SEXP clmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat& >::type clmat(clmatSEXP);
    rcpp_result_gen = Rcpp::wrap(src_pcm(clmat));
    return rcpp_result_gen;
END_RCPP
}
// src_psm
arma::mat src_psm(arma::imat& clmat);
RcppExport SEXP _T4cluster_src_psm(SEXP clmatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::imat& >::type clmat(clmatSEXP);
    rcpp_result_gen = Rcpp::wrap(src_psm(clmat));
    return rcpp_result_gen;
END_RCPP
}
// coreset_18B
Rcpp::List coreset_18B(arma::mat& X, int K, int M, int maxiter);
RcppExport SEXP _T4cluster_coreset_18B(SEXP XSEXP, SEXP KSEXP, SEXP MSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type M(MSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(coreset_18B(X, K, M, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// fpp_pdist_lp
arma::mat fpp_pdist_lp(arma::vec vect, arma::mat& vecf, double myp);
RcppExport SEXP _T4cluster_fpp_pdist_lp(SEXP vectSEXP, SEXP vecfSEXP, SEXP mypSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type vect(vectSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type vecf(vecfSEXP);
    Rcpp::traits::input_parameter< double >::type myp(mypSEXP);
    rcpp_result_gen = Rcpp::wrap(fpp_pdist_lp(vect, vecf, myp));
    return rcpp_result_gen;
END_RCPP
}
// gauss_w2median
Rcpp::List gauss_w2median(arma::vec& weight, arma::mat& mean, arma::cube& vars, int maxiter, double abstol);
RcppExport SEXP _T4cluster_gauss_w2median(SEXP weightSEXP, SEXP meanSEXP, SEXP varsSEXP, SEXP maxiterSEXP, SEXP abstolSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type vars(varsSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type abstol(abstolSEXP);
    rcpp_result_gen = Rcpp::wrap(gauss_w2median(weight, mean, vars, maxiter, abstol));
    return rcpp_result_gen;
END_RCPP
}
// eval_label
arma::uvec eval_label(arma::mat& X, arma::mat parMU, arma::cube parSIG, arma::vec parPI);
RcppExport SEXP _T4cluster_eval_label(SEXP XSEXP, SEXP parMUSEXP, SEXP parSIGSEXP, SEXP parPISEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type parMU(parMUSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type parSIG(parSIGSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type parPI(parPISEXP);
    rcpp_result_gen = Rcpp::wrap(eval_label(X, parMU, parSIG, parPI));
    return rcpp_result_gen;
END_RCPP
}
// gmm_skeleton
Rcpp::List gmm_skeleton(arma::mat& X, int k);
RcppExport SEXP _T4cluster_gmm_skeleton(SEXP XSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_skeleton(X, k));
    return rcpp_result_gen;
END_RCPP
}
// gmm_armadillo
Rcpp::List gmm_armadillo(arma::mat& X, int k, int maxiter, bool usediag);
RcppExport SEXP _T4cluster_gmm_armadillo(SEXP XSEXP, SEXP kSEXP, SEXP maxiterSEXP, SEXP usediagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type usediag(usediagSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_armadillo(X, k, maxiter, usediag));
    return rcpp_result_gen;
END_RCPP
}
// gmm_11R
Rcpp::List gmm_11R(arma::mat& X, int K, double lambda, int maxiter, bool usediag);
RcppExport SEXP _T4cluster_gmm_11R(SEXP XSEXP, SEXP KSEXP, SEXP lambdaSEXP, SEXP maxiterSEXP, SEXP usediagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type usediag(usediagSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_11R(X, K, lambda, maxiter, usediag));
    return rcpp_result_gen;
END_RCPP
}
// gmm_16Gfix
Rcpp::List gmm_16Gfix(arma::mat& X, int k, arma::vec weight, int maxiter, bool usediag);
RcppExport SEXP _T4cluster_gmm_16Gfix(SEXP XSEXP, SEXP kSEXP, SEXP weightSEXP, SEXP maxiterSEXP, SEXP usediagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< bool >::type usediag(usediagSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_16Gfix(X, k, weight, maxiter, usediag));
    return rcpp_result_gen;
END_RCPP
}
// gmm_combine_wsum
Rcpp::List gmm_combine_wsum(Rcpp::List& gmmlist, arma::vec& weight);
RcppExport SEXP _T4cluster_gmm_combine_wsum(SEXP gmmlistSEXP, SEXP weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List& >::type gmmlist(gmmlistSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weight(weightSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_combine_wsum(gmmlist, weight));
    return rcpp_result_gen;
END_RCPP
}
// gmm_density
arma::vec gmm_density(arma::mat& coords, arma::vec& weight, arma::mat& mean, arma::cube& variance);
RcppExport SEXP _T4cluster_gmm_density(SEXP coordsSEXP, SEXP weightSEXP, SEXP meanSEXP, SEXP varianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type coords(coordsSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type variance(varianceSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_density(coords, weight, mean, variance));
    return rcpp_result_gen;
END_RCPP
}
// gmm_pdist_wass2
arma::mat gmm_pdist_wass2(arma::mat& mean, arma::cube& variance);
RcppExport SEXP _T4cluster_gmm_pdist_wass2(SEXP meanSEXP, SEXP varianceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type variance(varianceSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_pdist_wass2(mean, variance));
    return rcpp_result_gen;
END_RCPP
}
// gmm_w2barycenter
Rcpp::List gmm_w2barycenter(arma::vec& weight, arma::mat& mean, arma::cube& vars);
RcppExport SEXP _T4cluster_gmm_w2barycenter(SEXP weightSEXP, SEXP meanSEXP, SEXP varsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type weight(weightSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< arma::cube& >::type vars(varsSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_w2barycenter(weight, mean, vars));
    return rcpp_result_gen;
END_RCPP
}
// arma_kmeans_random
Rcpp::List arma_kmeans_random(arma::mat& X, int k, int maxiter);
RcppExport SEXP _T4cluster_arma_kmeans_random(SEXP XSEXP, SEXP kSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(arma_kmeans_random(X, k, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// arma_kmeans_kmeanspp
Rcpp::List arma_kmeans_kmeanspp(arma::mat& X, arma::mat& init, int k, int maxiter);
RcppExport SEXP _T4cluster_arma_kmeans_kmeanspp(SEXP XSEXP, SEXP initSEXP, SEXP kSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type init(initSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(arma_kmeans_kmeanspp(X, init, k, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// sc_2015LB_commute
arma::mat sc_2015LB_commute(arma::mat& D, int K);
RcppExport SEXP _T4cluster_sc_2015LB_commute(SEXP DSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_2015LB_commute(D, K));
    return rcpp_result_gen;
END_RCPP
}
// cpp_scNJW
Rcpp::List cpp_scNJW(arma::mat& D, int K, double sigma, bool usekmeans, int maxiter);
RcppExport SEXP _T4cluster_cpp_scNJW(SEXP DSEXP, SEXP KSEXP, SEXP sigmaSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_scNJW(D, K, sigma, usekmeans, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// cpp_scSM
Rcpp::List cpp_scSM(arma::mat& D, int K, double sigma, bool usekmeans, int maxiter);
RcppExport SEXP _T4cluster_cpp_scSM(SEXP DSEXP, SEXP KSEXP, SEXP sigmaSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_scSM(D, K, sigma, usekmeans, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// cpp_scUL
Rcpp::List cpp_scUL(arma::mat& D, int K, double sigma, bool usekmeans, int maxiter);
RcppExport SEXP _T4cluster_cpp_scUL(SEXP DSEXP, SEXP KSEXP, SEXP sigmaSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_scUL(D, K, sigma, usekmeans, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sc05Z
Rcpp::List cpp_sc05Z(arma::mat& D, int K, int nnbd, bool usekmeans, int maxiter);
RcppExport SEXP _T4cluster_cpp_sc05Z(SEXP DSEXP, SEXP KSEXP, SEXP nnbdSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type nnbd(nnbdSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sc05Z(D, K, nnbd, usekmeans, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sc09G
Rcpp::List cpp_sc09G(arma::mat& D, int K, int nnbd, bool usekmeans, int maxiter);
RcppExport SEXP _T4cluster_cpp_sc09G(SEXP DSEXP, SEXP KSEXP, SEXP nnbdSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type nnbd(nnbdSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sc09G(D, K, nnbd, usekmeans, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sc10Z
Rcpp::List cpp_sc10Z(arma::mat& D, int K, bool usekmeans, int maxiter);
RcppExport SEXP _T4cluster_cpp_sc10Z(SEXP DSEXP, SEXP KSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sc10Z(D, K, usekmeans, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sc11Y
Rcpp::List cpp_sc11Y(arma::umat& idmat, arma::mat& distmat, int K, bool usekmeans, int maxiter, double rho);
RcppExport SEXP _T4cluster_cpp_sc11Y(SEXP idmatSEXP, SEXP distmatSEXP, SEXP KSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP, SEXP rhoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat& >::type idmat(idmatSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type distmat(distmatSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sc11Y(idmat, distmat, K, usekmeans, maxiter, rho));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sc12L
Rcpp::List cpp_sc12L(arma::mat& D, int K, bool usekmeans, int maxiter, double sigma);
RcppExport SEXP _T4cluster_cpp_sc12L(SEXP DSEXP, SEXP KSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type D(DSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sc12L(D, K, usekmeans, maxiter, sigma));
    return rcpp_result_gen;
END_RCPP
}
// fast_loss_prj
arma::vec fast_loss_prj(int nS, int dS, int mS, arma::mat PS, arma::mat xS, arma::vec muS);
RcppExport SEXP _T4cluster_fast_loss_prj(SEXP nSSEXP, SEXP dSSEXP, SEXP mSSEXP, SEXP PSSEXP, SEXP xSSEXP, SEXP muSSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type nS(nSSEXP);
    Rcpp::traits::input_parameter< int >::type dS(dSSEXP);
    Rcpp::traits::input_parameter< int >::type mS(mSSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type PS(PSSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type xS(xSSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type muS(muSSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_loss_prj(nS, dS, mS, PS, xS, muS));
    return rcpp_result_gen;
END_RCPP
}
// cpp_LRR
Rcpp::List cpp_LRR(arma::mat& X, int par_k, int par_r);
RcppExport SEXP _T4cluster_cpp_LRR(SEXP XSEXP, SEXP par_kSEXP, SEXP par_rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type par_k(par_kSEXP);
    Rcpp::traits::input_parameter< int >::type par_r(par_rSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_LRR(X, par_k, par_r));
    return rcpp_result_gen;
END_RCPP
}
// cpp_LRSC
Rcpp::List cpp_LRSC(arma::mat& X, int K, std::string algtype, double tau);
RcppExport SEXP _T4cluster_cpp_LRSC(SEXP XSEXP, SEXP KSEXP, SEXP algtypeSEXP, SEXP tauSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< std::string >::type algtype(algtypeSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_LRSC(X, K, algtype, tau));
    return rcpp_result_gen;
END_RCPP
}
// cpp_EKSS_0
arma::uvec cpp_EKSS_0(arma::mat& X, int K, int d);
RcppExport SEXP _T4cluster_cpp_EKSS_0(SEXP XSEXP, SEXP KSEXP, SEXP dSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_EKSS_0(X, K, d));
    return rcpp_result_gen;
END_RCPP
}
// cpp_EKSS_T
arma::uvec cpp_EKSS_T(arma::mat& X, int K, int d, int maxiter);
RcppExport SEXP _T4cluster_cpp_EKSS_T(SEXP XSEXP, SEXP KSEXP, SEXP dSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type d(dSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_EKSS_T(X, K, d, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// cpp_EKSS_affinity
arma::mat cpp_EKSS_affinity(arma::umat& labels);
RcppExport SEXP _T4cluster_cpp_EKSS_affinity(SEXP labelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat& >::type labels(labelsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_EKSS_affinity(labels));
    return rcpp_result_gen;
END_RCPP
}
// cpp_LSR
Rcpp::List cpp_LSR(arma::mat& data, int K, double lambda, bool zerodiag);
RcppExport SEXP _T4cluster_cpp_LSR(SEXP dataSEXP, SEXP KSEXP, SEXP lambdaSEXP, SEXP zerodiagSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type zerodiag(zerodiagSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_LSR(data, K, lambda, zerodiag));
    return rcpp_result_gen;
END_RCPP
}
// cpp_SSQP
Rcpp::List cpp_SSQP(arma::mat& data, int K, double lambda, int maxiter, double tolerance);
RcppExport SEXP _T4cluster_cpp_SSQP(SEXP dataSEXP, SEXP KSEXP, SEXP lambdaSEXP, SEXP maxiterSEXP, SEXP toleranceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< double >::type tolerance(toleranceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_SSQP(data, K, lambda, maxiter, tolerance));
    return rcpp_result_gen;
END_RCPP
}
// cpp_shortestpath
arma::mat cpp_shortestpath(arma::umat locs, arma::mat dists);
RcppExport SEXP _T4cluster_cpp_shortestpath(SEXP locsSEXP, SEXP distsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::umat >::type locs(locsSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type dists(distsSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_shortestpath(locs, dists));
    return rcpp_result_gen;
END_RCPP
}
// cpp_pdist
arma::mat cpp_pdist(arma::mat X, int p);
RcppExport SEXP _T4cluster_cpp_pdist(SEXP XSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_pdist(X, p));
    return rcpp_result_gen;
END_RCPP
}
// cpp_pdist2
arma::mat cpp_pdist2(arma::mat X, arma::mat Y, int p);
RcppExport SEXP _T4cluster_cpp_pdist2(SEXP XSEXP, SEXP YSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_pdist2(X, Y, p));
    return rcpp_result_gen;
END_RCPP
}
// cpp_pdistMP
arma::mat cpp_pdistMP(arma::mat X, int p, int nCores);
RcppExport SEXP _T4cluster_cpp_pdistMP(SEXP XSEXP, SEXP pSEXP, SEXP nCoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type nCores(nCoresSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_pdistMP(X, p, nCores));
    return rcpp_result_gen;
END_RCPP
}
// cpp_sample
arma::uvec cpp_sample(int N, int m, arma::vec prob, bool replace);
RcppExport SEXP _T4cluster_cpp_sample(SEXP NSEXP, SEXP mSEXP, SEXP probSEXP, SEXP replaceSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type prob(probSEXP);
    Rcpp::traits::input_parameter< bool >::type replace(replaceSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_sample(N, m, prob, replace));
    return rcpp_result_gen;
END_RCPP
}
// cpp_setdiff
arma::uvec cpp_setdiff(arma::uvec& x, arma::uvec& y);
RcppExport SEXP _T4cluster_cpp_setdiff(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::uvec& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_setdiff(x, y));
    return rcpp_result_gen;
END_RCPP
}
// label_kmeans
arma::urowvec label_kmeans(arma::mat data, int K, int maxiter);
RcppExport SEXP _T4cluster_label_kmeans(SEXP dataSEXP, SEXP KSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(label_kmeans(data, K, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// label_gmm
arma::urowvec label_gmm(arma::mat data, int K, int maxiter);
RcppExport SEXP _T4cluster_label_gmm(SEXP dataSEXP, SEXP KSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(label_gmm(data, K, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// sc_unnormalized
Rcpp::List sc_unnormalized(arma::mat W, int K, bool usekmeans, int maxiter);
RcppExport SEXP _T4cluster_sc_unnormalized(SEXP WSEXP, SEXP KSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_unnormalized(W, K, usekmeans, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// sc_normalNJW
Rcpp::List sc_normalNJW(arma::mat W, int K, bool usekmeans, int maxiter);
RcppExport SEXP _T4cluster_sc_normalNJW(SEXP WSEXP, SEXP KSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_normalNJW(W, K, usekmeans, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// sc_normalSM
Rcpp::List sc_normalSM(arma::mat W, int K, bool usekmeans, int maxiter);
RcppExport SEXP _T4cluster_sc_normalSM(SEXP WSEXP, SEXP KSEXP, SEXP usekmeansSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type W(WSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    Rcpp::traits::input_parameter< bool >::type usekmeans(usekmeansSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_normalSM(W, K, usekmeans, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// gmm_predict
arma::uvec gmm_predict(arma::mat X, arma::colvec oldweight, arma::mat oldmeans, arma::cube oldcovs);
RcppExport SEXP _T4cluster_gmm_predict(SEXP XSEXP, SEXP oldweightSEXP, SEXP oldmeansSEXP, SEXP oldcovsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type oldweight(oldweightSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type oldmeans(oldmeansSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type oldcovs(oldcovsSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_predict(X, oldweight, oldmeans, oldcovs));
    return rcpp_result_gen;
END_RCPP
}
// gmm_sample
arma::mat gmm_sample(int n, arma::colvec oldweight, arma::mat oldmeans, arma::cube oldcovs);
RcppExport SEXP _T4cluster_gmm_sample(SEXP nSEXP, SEXP oldweightSEXP, SEXP oldmeansSEXP, SEXP oldcovsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type oldweight(oldweightSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type oldmeans(oldmeansSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type oldcovs(oldcovsSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_sample(n, oldweight, oldmeans, oldcovs));
    return rcpp_result_gen;
END_RCPP
}
// gmm_loglkd
double gmm_loglkd(arma::mat X, arma::colvec oldweight, arma::mat oldmeans, arma::cube oldcovs);
RcppExport SEXP _T4cluster_gmm_loglkd(SEXP XSEXP, SEXP oldweightSEXP, SEXP oldmeansSEXP, SEXP oldcovsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type oldweight(oldweightSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type oldmeans(oldmeansSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type oldcovs(oldcovsSEXP);
    rcpp_result_gen = Rcpp::wrap(gmm_loglkd(X, oldweight, oldmeans, oldcovs));
    return rcpp_result_gen;
END_RCPP
}
// gauss_rmvnorm
arma::mat gauss_rmvnorm(int N, arma::vec mu, arma::mat var);
RcppExport SEXP _T4cluster_gauss_rmvnorm(SEXP NSEXP, SEXP muSEXP, SEXP varSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type var(varSEXP);
    rcpp_result_gen = Rcpp::wrap(gauss_rmvnorm(N, mu, var));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_T4cluster_src_pcm", (DL_FUNC) &_T4cluster_src_pcm, 1},
    {"_T4cluster_src_psm", (DL_FUNC) &_T4cluster_src_psm, 1},
    {"_T4cluster_coreset_18B", (DL_FUNC) &_T4cluster_coreset_18B, 4},
    {"_T4cluster_fpp_pdist_lp", (DL_FUNC) &_T4cluster_fpp_pdist_lp, 3},
    {"_T4cluster_gauss_w2median", (DL_FUNC) &_T4cluster_gauss_w2median, 5},
    {"_T4cluster_eval_label", (DL_FUNC) &_T4cluster_eval_label, 4},
    {"_T4cluster_gmm_skeleton", (DL_FUNC) &_T4cluster_gmm_skeleton, 2},
    {"_T4cluster_gmm_armadillo", (DL_FUNC) &_T4cluster_gmm_armadillo, 4},
    {"_T4cluster_gmm_11R", (DL_FUNC) &_T4cluster_gmm_11R, 5},
    {"_T4cluster_gmm_16Gfix", (DL_FUNC) &_T4cluster_gmm_16Gfix, 5},
    {"_T4cluster_gmm_combine_wsum", (DL_FUNC) &_T4cluster_gmm_combine_wsum, 2},
    {"_T4cluster_gmm_density", (DL_FUNC) &_T4cluster_gmm_density, 4},
    {"_T4cluster_gmm_pdist_wass2", (DL_FUNC) &_T4cluster_gmm_pdist_wass2, 2},
    {"_T4cluster_gmm_w2barycenter", (DL_FUNC) &_T4cluster_gmm_w2barycenter, 3},
    {"_T4cluster_arma_kmeans_random", (DL_FUNC) &_T4cluster_arma_kmeans_random, 3},
    {"_T4cluster_arma_kmeans_kmeanspp", (DL_FUNC) &_T4cluster_arma_kmeans_kmeanspp, 4},
    {"_T4cluster_sc_2015LB_commute", (DL_FUNC) &_T4cluster_sc_2015LB_commute, 2},
    {"_T4cluster_cpp_scNJW", (DL_FUNC) &_T4cluster_cpp_scNJW, 5},
    {"_T4cluster_cpp_scSM", (DL_FUNC) &_T4cluster_cpp_scSM, 5},
    {"_T4cluster_cpp_scUL", (DL_FUNC) &_T4cluster_cpp_scUL, 5},
    {"_T4cluster_cpp_sc05Z", (DL_FUNC) &_T4cluster_cpp_sc05Z, 5},
    {"_T4cluster_cpp_sc09G", (DL_FUNC) &_T4cluster_cpp_sc09G, 5},
    {"_T4cluster_cpp_sc10Z", (DL_FUNC) &_T4cluster_cpp_sc10Z, 4},
    {"_T4cluster_cpp_sc11Y", (DL_FUNC) &_T4cluster_cpp_sc11Y, 6},
    {"_T4cluster_cpp_sc12L", (DL_FUNC) &_T4cluster_cpp_sc12L, 5},
    {"_T4cluster_fast_loss_prj", (DL_FUNC) &_T4cluster_fast_loss_prj, 6},
    {"_T4cluster_cpp_LRR", (DL_FUNC) &_T4cluster_cpp_LRR, 3},
    {"_T4cluster_cpp_LRSC", (DL_FUNC) &_T4cluster_cpp_LRSC, 4},
    {"_T4cluster_cpp_EKSS_0", (DL_FUNC) &_T4cluster_cpp_EKSS_0, 3},
    {"_T4cluster_cpp_EKSS_T", (DL_FUNC) &_T4cluster_cpp_EKSS_T, 4},
    {"_T4cluster_cpp_EKSS_affinity", (DL_FUNC) &_T4cluster_cpp_EKSS_affinity, 1},
    {"_T4cluster_cpp_LSR", (DL_FUNC) &_T4cluster_cpp_LSR, 4},
    {"_T4cluster_cpp_SSQP", (DL_FUNC) &_T4cluster_cpp_SSQP, 5},
    {"_T4cluster_cpp_shortestpath", (DL_FUNC) &_T4cluster_cpp_shortestpath, 2},
    {"_T4cluster_cpp_pdist", (DL_FUNC) &_T4cluster_cpp_pdist, 2},
    {"_T4cluster_cpp_pdist2", (DL_FUNC) &_T4cluster_cpp_pdist2, 3},
    {"_T4cluster_cpp_pdistMP", (DL_FUNC) &_T4cluster_cpp_pdistMP, 3},
    {"_T4cluster_cpp_sample", (DL_FUNC) &_T4cluster_cpp_sample, 4},
    {"_T4cluster_cpp_setdiff", (DL_FUNC) &_T4cluster_cpp_setdiff, 2},
    {"_T4cluster_label_kmeans", (DL_FUNC) &_T4cluster_label_kmeans, 3},
    {"_T4cluster_label_gmm", (DL_FUNC) &_T4cluster_label_gmm, 3},
    {"_T4cluster_sc_unnormalized", (DL_FUNC) &_T4cluster_sc_unnormalized, 4},
    {"_T4cluster_sc_normalNJW", (DL_FUNC) &_T4cluster_sc_normalNJW, 4},
    {"_T4cluster_sc_normalSM", (DL_FUNC) &_T4cluster_sc_normalSM, 4},
    {"_T4cluster_gmm_predict", (DL_FUNC) &_T4cluster_gmm_predict, 4},
    {"_T4cluster_gmm_sample", (DL_FUNC) &_T4cluster_gmm_sample, 4},
    {"_T4cluster_gmm_loglkd", (DL_FUNC) &_T4cluster_gmm_loglkd, 4},
    {"_T4cluster_gauss_rmvnorm", (DL_FUNC) &_T4cluster_gauss_rmvnorm, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_T4cluster(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
