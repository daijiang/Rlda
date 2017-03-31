// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// lda_multinomial
List lda_multinomial(DataFrame data, int n_community, NumericVector beta, double gamma, int n_gibbs, bool ll_prior, bool display_progress);
RcppExport SEXP Rlda_lda_multinomial(SEXP dataSEXP, SEXP n_communitySEXP, SEXP betaSEXP, SEXP gammaSEXP, SEXP n_gibbsSEXP, SEXP ll_priorSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type n_community(n_communitySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type n_gibbs(n_gibbsSEXP);
    Rcpp::traits::input_parameter< bool >::type ll_prior(ll_priorSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(lda_multinomial(data, n_community, beta, gamma, n_gibbs, ll_prior, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// lda_binomial
List lda_binomial(DataFrame data, DataFrame pop, int n_community, double alpha0, double alpha1, double gamma, int n_gibbs, bool ll_prior, bool display_progress);
RcppExport SEXP Rlda_lda_binomial(SEXP dataSEXP, SEXP popSEXP, SEXP n_communitySEXP, SEXP alpha0SEXP, SEXP alpha1SEXP, SEXP gammaSEXP, SEXP n_gibbsSEXP, SEXP ll_priorSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< DataFrame >::type pop(popSEXP);
    Rcpp::traits::input_parameter< int >::type n_community(n_communitySEXP);
    Rcpp::traits::input_parameter< double >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha1(alpha1SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type n_gibbs(n_gibbsSEXP);
    Rcpp::traits::input_parameter< bool >::type ll_prior(ll_priorSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(lda_binomial(data, pop, n_community, alpha0, alpha1, gamma, n_gibbs, ll_prior, display_progress));
    return rcpp_result_gen;
END_RCPP
}
// lda_bernoulli
List lda_bernoulli(DataFrame data, int n_community, double alpha0, double alpha1, double gamma, int n_gibbs, bool ll_prior, bool display_progress);
RcppExport SEXP Rlda_lda_bernoulli(SEXP dataSEXP, SEXP n_communitySEXP, SEXP alpha0SEXP, SEXP alpha1SEXP, SEXP gammaSEXP, SEXP n_gibbsSEXP, SEXP ll_priorSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type n_community(n_communitySEXP);
    Rcpp::traits::input_parameter< double >::type alpha0(alpha0SEXP);
    Rcpp::traits::input_parameter< double >::type alpha1(alpha1SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type n_gibbs(n_gibbsSEXP);
    Rcpp::traits::input_parameter< bool >::type ll_prior(ll_priorSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    rcpp_result_gen = Rcpp::wrap(lda_bernoulli(data, n_community, alpha0, alpha1, gamma, n_gibbs, ll_prior, display_progress));
    return rcpp_result_gen;
END_RCPP
}
