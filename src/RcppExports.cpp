// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// get_log_lm_terms_cpp
SEXP get_log_lm_terms_cpp(arma::mat const& lower, arma::mat const& upper, arma::imat const& code, Rcpp::List multinomial, arma::uvec const idx_non_zero_mean);
RcppExport SEXP _mdgc_get_log_lm_terms_cpp(SEXP lowerSEXP, SEXP upperSEXP, SEXP codeSEXP, SEXP multinomialSEXP, SEXP idx_non_zero_meanSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< arma::imat const& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type multinomial(multinomialSEXP);
    Rcpp::traits::input_parameter< arma::uvec const >::type idx_non_zero_mean(idx_non_zero_meanSEXP);
    rcpp_result_gen = Rcpp::wrap(get_log_lm_terms_cpp(lower, upper, code, multinomial, idx_non_zero_mean));
    return rcpp_result_gen;
END_RCPP
}
// eval_log_lm_terms
Rcpp::NumericVector eval_log_lm_terms(SEXP ptr, arma::ivec const& indices, arma::mat const& vcov, arma::vec const& mu, int const maxpts, double const abs_eps, double const rel_eps, size_t const n_threads, bool const comp_derivs, unsigned const minvls, bool const do_reorder, bool const use_aprx);
RcppExport SEXP _mdgc_eval_log_lm_terms(SEXP ptrSEXP, SEXP indicesSEXP, SEXP vcovSEXP, SEXP muSEXP, SEXP maxptsSEXP, SEXP abs_epsSEXP, SEXP rel_epsSEXP, SEXP n_threadsSEXP, SEXP comp_derivsSEXP, SEXP minvlsSEXP, SEXP do_reorderSEXP, SEXP use_aprxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ptr(ptrSEXP);
    Rcpp::traits::input_parameter< arma::ivec const& >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type vcov(vcovSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< int const >::type maxpts(maxptsSEXP);
    Rcpp::traits::input_parameter< double const >::type abs_eps(abs_epsSEXP);
    Rcpp::traits::input_parameter< double const >::type rel_eps(rel_epsSEXP);
    Rcpp::traits::input_parameter< size_t const >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< bool const >::type comp_derivs(comp_derivsSEXP);
    Rcpp::traits::input_parameter< unsigned const >::type minvls(minvlsSEXP);
    Rcpp::traits::input_parameter< bool const >::type do_reorder(do_reorderSEXP);
    Rcpp::traits::input_parameter< bool const >::type use_aprx(use_aprxSEXP);
    rcpp_result_gen = Rcpp::wrap(eval_log_lm_terms(ptr, indices, vcov, mu, maxpts, abs_eps, rel_eps, n_threads, comp_derivs, minvls, do_reorder, use_aprx));
    return rcpp_result_gen;
END_RCPP
}
// get_z_hat
Rcpp::NumericMatrix get_z_hat(arma::mat const& lower, arma::mat const& upper, arma::imat const& code, unsigned const n_threads, Rcpp::List multinomial);
RcppExport SEXP _mdgc_get_z_hat(SEXP lowerSEXP, SEXP upperSEXP, SEXP codeSEXP, SEXP n_threadsSEXP, SEXP multinomialSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< arma::imat const& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< unsigned const >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type multinomial(multinomialSEXP);
    rcpp_result_gen = Rcpp::wrap(get_z_hat(lower, upper, code, n_threads, multinomial));
    return rcpp_result_gen;
END_RCPP
}
// pmvnorm_to_R
Rcpp::NumericVector pmvnorm_to_R(arma::vec const& lower, arma::vec const& upper, arma::vec const& mu, arma::mat const& Sigma, int const maxvls, double const abs_eps, double const rel_eps, bool const derivs, bool const do_reorder, bool const use_aprx);
RcppExport SEXP _mdgc_pmvnorm_to_R(SEXP lowerSEXP, SEXP upperSEXP, SEXP muSEXP, SEXP SigmaSEXP, SEXP maxvlsSEXP, SEXP abs_epsSEXP, SEXP rel_epsSEXP, SEXP derivsSEXP, SEXP do_reorderSEXP, SEXP use_aprxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec const& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< int const >::type maxvls(maxvlsSEXP);
    Rcpp::traits::input_parameter< double const >::type abs_eps(abs_epsSEXP);
    Rcpp::traits::input_parameter< double const >::type rel_eps(rel_epsSEXP);
    Rcpp::traits::input_parameter< bool const >::type derivs(derivsSEXP);
    Rcpp::traits::input_parameter< bool const >::type do_reorder(do_reorderSEXP);
    Rcpp::traits::input_parameter< bool const >::type use_aprx(use_aprxSEXP);
    rcpp_result_gen = Rcpp::wrap(pmvnorm_to_R(lower, upper, mu, Sigma, maxvls, abs_eps, rel_eps, derivs, do_reorder, use_aprx));
    return rcpp_result_gen;
END_RCPP
}
// get_commutation_to_R
arma::mat get_commutation_to_R(unsigned const n, unsigned const m);
RcppExport SEXP _mdgc_get_commutation_to_R(SEXP nSEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< unsigned const >::type n(nSEXP);
    Rcpp::traits::input_parameter< unsigned const >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(get_commutation_to_R(n, m));
    return rcpp_result_gen;
END_RCPP
}
// get_commutation_vec
Rcpp::IntegerVector get_commutation_vec(unsigned const n, unsigned const m, bool const transpose);
RcppExport SEXP _mdgc_get_commutation_vec(SEXP nSEXP, SEXP mSEXP, SEXP transposeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< unsigned const >::type n(nSEXP);
    Rcpp::traits::input_parameter< unsigned const >::type m(mSEXP);
    Rcpp::traits::input_parameter< bool const >::type transpose(transposeSEXP);
    rcpp_result_gen = Rcpp::wrap(get_commutation_vec(n, m, transpose));
    return rcpp_result_gen;
END_RCPP
}
// x_dot_X_kron_I_wrap
arma::mat x_dot_X_kron_I_wrap(arma::vec const& x, arma::mat const& X, size_t const l);
RcppExport SEXP _mdgc_x_dot_X_kron_I_wrap(SEXP xSEXP, SEXP XSEXP, SEXP lSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type X(XSEXP);
    Rcpp::traits::input_parameter< size_t const >::type l(lSEXP);
    rcpp_result_gen = Rcpp::wrap(x_dot_X_kron_I_wrap(x, X, l));
    return rcpp_result_gen;
END_RCPP
}
// impute
Rcpp::List impute(arma::mat const& lower, arma::mat const& upper, arma::imat const& code, arma::mat const& Sigma, arma::vec const& mea, arma::mat const& truth, Rcpp::List margs, Rcpp::List multinomial, double const rel_eps, double const abs_eps, unsigned const maxit, Rcpp::List passed_names, Rcpp::CharacterVector outer_names, int const n_threads, bool const do_reorder, int const minvls, bool const use_aprx);
RcppExport SEXP _mdgc_impute(SEXP lowerSEXP, SEXP upperSEXP, SEXP codeSEXP, SEXP SigmaSEXP, SEXP meaSEXP, SEXP truthSEXP, SEXP margsSEXP, SEXP multinomialSEXP, SEXP rel_epsSEXP, SEXP abs_epsSEXP, SEXP maxitSEXP, SEXP passed_namesSEXP, SEXP outer_namesSEXP, SEXP n_threadsSEXP, SEXP do_reorderSEXP, SEXP minvlsSEXP, SEXP use_aprxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat const& >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type upper(upperSEXP);
    Rcpp::traits::input_parameter< arma::imat const& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type mea(meaSEXP);
    Rcpp::traits::input_parameter< arma::mat const& >::type truth(truthSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type margs(margsSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type multinomial(multinomialSEXP);
    Rcpp::traits::input_parameter< double const >::type rel_eps(rel_epsSEXP);
    Rcpp::traits::input_parameter< double const >::type abs_eps(abs_epsSEXP);
    Rcpp::traits::input_parameter< unsigned const >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< Rcpp::List >::type passed_names(passed_namesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type outer_names(outer_namesSEXP);
    Rcpp::traits::input_parameter< int const >::type n_threads(n_threadsSEXP);
    Rcpp::traits::input_parameter< bool const >::type do_reorder(do_reorderSEXP);
    Rcpp::traits::input_parameter< int const >::type minvls(minvlsSEXP);
    Rcpp::traits::input_parameter< bool const >::type use_aprx(use_aprxSEXP);
    rcpp_result_gen = Rcpp::wrap(impute(lower, upper, code, Sigma, mea, truth, margs, multinomial, rel_eps, abs_eps, maxit, passed_names, outer_names, n_threads, do_reorder, minvls, use_aprx));
    return rcpp_result_gen;
END_RCPP
}
// lower_tri_inner
Rcpp::NumericVector lower_tri_inner(Rcpp::NumericVector x, Rcpp::IntegerMatrix idx, bool const jacob, Rcpp::NumericVector rhs);
RcppExport SEXP _mdgc_lower_tri_inner(SEXP xSEXP, SEXP idxSEXP, SEXP jacobSEXP, SEXP rhsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerMatrix >::type idx(idxSEXP);
    Rcpp::traits::input_parameter< bool const >::type jacob(jacobSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type rhs(rhsSEXP);
    rcpp_result_gen = Rcpp::wrap(lower_tri_inner(x, idx, jacob, rhs));
    return rcpp_result_gen;
END_RCPP
}
// eval_multinomial_prob
double eval_multinomial_prob(int const icase, arma::vec const& means);
RcppExport SEXP _mdgc_eval_multinomial_prob(SEXP icaseSEXP, SEXP meansSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int const >::type icase(icaseSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type means(meansSEXP);
    rcpp_result_gen = Rcpp::wrap(eval_multinomial_prob(icase, means));
    return rcpp_result_gen;
END_RCPP
}
// eval_multinomial_prob_gr
Rcpp::NumericVector eval_multinomial_prob_gr(int const icase, arma::vec const& means);
RcppExport SEXP _mdgc_eval_multinomial_prob_gr(SEXP icaseSEXP, SEXP meansSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< int const >::type icase(icaseSEXP);
    Rcpp::traits::input_parameter< arma::vec const& >::type means(meansSEXP);
    rcpp_result_gen = Rcpp::wrap(eval_multinomial_prob_gr(icase, means));
    return rcpp_result_gen;
END_RCPP
}
// multinomial_find_means
Rcpp::NumericVector multinomial_find_means(arma::vec const& probs, double const rel_eps, int const max_it, double const c1, double const c2);
RcppExport SEXP _mdgc_multinomial_find_means(SEXP probsSEXP, SEXP rel_epsSEXP, SEXP max_itSEXP, SEXP c1SEXP, SEXP c2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec const& >::type probs(probsSEXP);
    Rcpp::traits::input_parameter< double const >::type rel_eps(rel_epsSEXP);
    Rcpp::traits::input_parameter< int const >::type max_it(max_itSEXP);
    Rcpp::traits::input_parameter< double const >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< double const >::type c2(c2SEXP);
    rcpp_result_gen = Rcpp::wrap(multinomial_find_means(probs, rel_eps, max_it, c1, c2));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests(SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_mdgc_get_log_lm_terms_cpp", (DL_FUNC) &_mdgc_get_log_lm_terms_cpp, 5},
    {"_mdgc_eval_log_lm_terms", (DL_FUNC) &_mdgc_eval_log_lm_terms, 12},
    {"_mdgc_get_z_hat", (DL_FUNC) &_mdgc_get_z_hat, 5},
    {"_mdgc_pmvnorm_to_R", (DL_FUNC) &_mdgc_pmvnorm_to_R, 10},
    {"_mdgc_get_commutation_to_R", (DL_FUNC) &_mdgc_get_commutation_to_R, 2},
    {"_mdgc_get_commutation_vec", (DL_FUNC) &_mdgc_get_commutation_vec, 3},
    {"_mdgc_x_dot_X_kron_I_wrap", (DL_FUNC) &_mdgc_x_dot_X_kron_I_wrap, 3},
    {"_mdgc_impute", (DL_FUNC) &_mdgc_impute, 17},
    {"_mdgc_lower_tri_inner", (DL_FUNC) &_mdgc_lower_tri_inner, 4},
    {"_mdgc_eval_multinomial_prob", (DL_FUNC) &_mdgc_eval_multinomial_prob, 2},
    {"_mdgc_eval_multinomial_prob_gr", (DL_FUNC) &_mdgc_eval_multinomial_prob_gr, 2},
    {"_mdgc_multinomial_find_means", (DL_FUNC) &_mdgc_multinomial_find_means, 5},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_mdgc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
