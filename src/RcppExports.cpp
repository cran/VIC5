// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// XAJrun
List XAJrun(NumericVector PREC, NumericVector EVAP, NumericVector parameters, NumericVector UH, double Area, double dt);
RcppExport SEXP _VIC5_XAJrun(SEXP PRECSEXP, SEXP EVAPSEXP, SEXP parametersSEXP, SEXP UHSEXP, SEXP AreaSEXP, SEXP dtSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type PREC(PRECSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type EVAP(EVAPSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type parameters(parametersSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type UH(UHSEXP);
    Rcpp::traits::input_parameter< double >::type Area(AreaSEXP);
    Rcpp::traits::input_parameter< double >::type dt(dtSEXP);
    rcpp_result_gen = Rcpp::wrap(XAJrun(PREC, EVAP, parameters, UH, Area, dt));
    return rcpp_result_gen;
END_RCPP
}
// aux_Lohmann_conv
NumericVector aux_Lohmann_conv(NumericMatrix tmpm);
RcppExport SEXP _VIC5_aux_Lohmann_conv(SEXP tmpmSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type tmpm(tmpmSEXP);
    rcpp_result_gen = Rcpp::wrap(aux_Lohmann_conv(tmpm));
    return rcpp_result_gen;
END_RCPP
}
// vic_run_cell
List vic_run_cell(List vic_options, NumericMatrix forcing, NumericVector soil_par, NumericVector snowband, NumericMatrix veg_par, NumericVector lake_par, NumericMatrix forcing_veg, NumericMatrix veglib, List output_info);
RcppExport SEXP _VIC5_vic_run_cell(SEXP vic_optionsSEXP, SEXP forcingSEXP, SEXP soil_parSEXP, SEXP snowbandSEXP, SEXP veg_parSEXP, SEXP lake_parSEXP, SEXP forcing_vegSEXP, SEXP veglibSEXP, SEXP output_infoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type vic_options(vic_optionsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type forcing(forcingSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type soil_par(soil_parSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type snowband(snowbandSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type veg_par(veg_parSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lake_par(lake_parSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type forcing_veg(forcing_vegSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type veglib(veglibSEXP);
    Rcpp::traits::input_parameter< List >::type output_info(output_infoSEXP);
    rcpp_result_gen = Rcpp::wrap(vic_run_cell(vic_options, forcing, soil_par, snowband, veg_par, lake_par, forcing_veg, veglib, output_info));
    return rcpp_result_gen;
END_RCPP
}
// vic_run_cells_all
List vic_run_cells_all(List vic_options, arma::cube forcing_3d, NumericMatrix soil_par_mat, List veg_par_list, NumericMatrix forcing_veg, NumericVector snowband, NumericVector lake_par, NumericMatrix veglib, List output_info, int ncores);
RcppExport SEXP _VIC5_vic_run_cells_all(SEXP vic_optionsSEXP, SEXP forcing_3dSEXP, SEXP soil_par_matSEXP, SEXP veg_par_listSEXP, SEXP forcing_vegSEXP, SEXP snowbandSEXP, SEXP lake_parSEXP, SEXP veglibSEXP, SEXP output_infoSEXP, SEXP ncoresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type vic_options(vic_optionsSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type forcing_3d(forcing_3dSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type soil_par_mat(soil_par_matSEXP);
    Rcpp::traits::input_parameter< List >::type veg_par_list(veg_par_listSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type forcing_veg(forcing_vegSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type snowband(snowbandSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type lake_par(lake_parSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type veglib(veglibSEXP);
    Rcpp::traits::input_parameter< List >::type output_info(output_infoSEXP);
    Rcpp::traits::input_parameter< int >::type ncores(ncoresSEXP);
    rcpp_result_gen = Rcpp::wrap(vic_run_cells_all(vic_options, forcing_3d, soil_par_mat, veg_par_list, forcing_veg, snowband, lake_par, veglib, output_info, ncores));
    return rcpp_result_gen;
END_RCPP
}
// vic_version
void vic_version();
RcppExport SEXP _VIC5_vic_version() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    vic_version();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_VIC5_XAJrun", (DL_FUNC) &_VIC5_XAJrun, 6},
    {"_VIC5_aux_Lohmann_conv", (DL_FUNC) &_VIC5_aux_Lohmann_conv, 1},
    {"_VIC5_vic_run_cell", (DL_FUNC) &_VIC5_vic_run_cell, 9},
    {"_VIC5_vic_run_cells_all", (DL_FUNC) &_VIC5_vic_run_cells_all, 10},
    {"_VIC5_vic_version", (DL_FUNC) &_VIC5_vic_version, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_VIC5(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
