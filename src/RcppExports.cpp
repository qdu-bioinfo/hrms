// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// Multi_Comp_Table
RcppExport SEXP Multi_Comp_Table(SEXP gene_s, SEXP pw_s, SEXP features_s, SEXP samples_s, SEXP abds_s, SEXP Dist_matrix_s, SEXP is_sim_s);
RcppExport SEXP _hrms_Multi_Comp_Table(SEXP gene_sSEXP, SEXP pw_sSEXP, SEXP features_sSEXP, SEXP samples_sSEXP, SEXP abds_sSEXP, SEXP Dist_matrix_sSEXP, SEXP is_sim_sSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type gene_s(gene_sSEXP);
    Rcpp::traits::input_parameter< SEXP >::type pw_s(pw_sSEXP);
    Rcpp::traits::input_parameter< SEXP >::type features_s(features_sSEXP);
    Rcpp::traits::input_parameter< SEXP >::type samples_s(samples_sSEXP);
    Rcpp::traits::input_parameter< SEXP >::type abds_s(abds_sSEXP);
    Rcpp::traits::input_parameter< SEXP >::type Dist_matrix_s(Dist_matrix_sSEXP);
    Rcpp::traits::input_parameter< SEXP >::type is_sim_s(is_sim_sSEXP);
    rcpp_result_gen = Rcpp::wrap(Multi_Comp_Table(gene_s, pw_s, features_s, samples_s, abds_s, Dist_matrix_s, is_sim_s));
    return rcpp_result_gen;
END_RCPP
}
// get_pcoa
RcppExport SEXP get_pcoa(SEXP dis, SEXP k_);
RcppExport SEXP _hrms_get_pcoa(SEXP disSEXP, SEXP k_SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type dis(disSEXP);
    Rcpp::traits::input_parameter< SEXP >::type k_(k_SEXP);
    rcpp_result_gen = Rcpp::wrap(get_pcoa(dis, k_));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP get_pcoa(SEXP, SEXP);
RcppExport SEXP Multi_Comp_Table(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_hrms_Multi_Comp_Table", (DL_FUNC) &_hrms_Multi_Comp_Table, 7},
    {"_hrms_get_pcoa", (DL_FUNC) &_hrms_get_pcoa, 2},
    {"get_pcoa",         (DL_FUNC) &get_pcoa,         2},
    {"Multi_Comp_Table", (DL_FUNC) &Multi_Comp_Table, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_hrms(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
