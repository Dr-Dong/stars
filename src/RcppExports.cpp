// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// CPL_GetMetadata
Rcpp::CharacterVector CPL_GetMetadata(Rcpp::CharacterVector obj, Rcpp::CharacterVector domain_item, Rcpp::CharacterVector options);
RcppExport SEXP _stars_CPL_GetMetadata(SEXP objSEXP, SEXP domain_itemSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type obj(objSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type domain_item(domain_itemSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_GetMetadata(obj, domain_item, options));
    return rcpp_result_gen;
END_RCPP
}
// CPL_get_crs
Rcpp::List CPL_get_crs(Rcpp::CharacterVector obj, Rcpp::CharacterVector options);
RcppExport SEXP _stars_CPL_get_crs(SEXP objSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type obj(objSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_get_crs(obj, options));
    return rcpp_result_gen;
END_RCPP
}
// CPL_read_gdal
Rcpp::NumericMatrix CPL_read_gdal(Rcpp::CharacterVector fname, bool verbose);
RcppExport SEXP _stars_CPL_read_gdal(SEXP fnameSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type fname(fnameSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_read_gdal(fname, verbose));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdal_init
void CPL_gdal_init();
RcppExport SEXP _stars_CPL_gdal_init() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    CPL_gdal_init();
    return R_NilValue;
END_RCPP
}
// CPL_gdal_cleanup_all
void CPL_gdal_cleanup_all();
RcppExport SEXP _stars_CPL_gdal_cleanup_all() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    CPL_gdal_cleanup_all();
    return R_NilValue;
END_RCPP
}
// CPL_gdal_version
const char* CPL_gdal_version(const char* what);
RcppExport SEXP _stars_CPL_gdal_version(SEXP whatSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type what(whatSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdal_version(what));
    return rcpp_result_gen;
END_RCPP
}
// CPL_proj_version
std::string CPL_proj_version(bool b);
RcppExport SEXP _stars_CPL_proj_version(SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< bool >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_proj_version(b));
    return rcpp_result_gen;
END_RCPP
}
// CPL_proj_is_valid
Rcpp::List CPL_proj_is_valid(std::string proj4string);
RcppExport SEXP _stars_CPL_proj_is_valid(SEXP proj4stringSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type proj4string(proj4stringSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_proj_is_valid(proj4string));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdalinfo
Rcpp::CharacterVector CPL_gdalinfo(Rcpp::CharacterVector obj, Rcpp::CharacterVector options);
RcppExport SEXP _stars_CPL_gdalinfo(SEXP objSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type obj(objSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdalinfo(obj, options));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdalwarp
Rcpp::LogicalVector CPL_gdalwarp(Rcpp::CharacterVector src, Rcpp::CharacterVector dst, Rcpp::CharacterVector options);
RcppExport SEXP _stars_CPL_gdalwarp(SEXP srcSEXP, SEXP dstSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type src(srcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dst(dstSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdalwarp(src, dst, options));
    return rcpp_result_gen;
END_RCPP
}
// CPL_gdalrasterize
Rcpp::LogicalVector CPL_gdalrasterize(Rcpp::CharacterVector src, Rcpp::CharacterVector dst, Rcpp::CharacterVector options);
RcppExport SEXP _stars_CPL_gdalrasterize(SEXP srcSEXP, SEXP dstSEXP, SEXP optionsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type src(srcSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type dst(dstSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type options(optionsSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_gdalrasterize(src, dst, options));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_stars_CPL_GetMetadata", (DL_FUNC) &_stars_CPL_GetMetadata, 3},
    {"_stars_CPL_get_crs", (DL_FUNC) &_stars_CPL_get_crs, 2},
    {"_stars_CPL_read_gdal", (DL_FUNC) &_stars_CPL_read_gdal, 2},
    {"_stars_CPL_gdal_init", (DL_FUNC) &_stars_CPL_gdal_init, 0},
    {"_stars_CPL_gdal_cleanup_all", (DL_FUNC) &_stars_CPL_gdal_cleanup_all, 0},
    {"_stars_CPL_gdal_version", (DL_FUNC) &_stars_CPL_gdal_version, 1},
    {"_stars_CPL_proj_version", (DL_FUNC) &_stars_CPL_proj_version, 1},
    {"_stars_CPL_proj_is_valid", (DL_FUNC) &_stars_CPL_proj_is_valid, 1},
    {"_stars_CPL_gdalinfo", (DL_FUNC) &_stars_CPL_gdalinfo, 2},
    {"_stars_CPL_gdalwarp", (DL_FUNC) &_stars_CPL_gdalwarp, 3},
    {"_stars_CPL_gdalrasterize", (DL_FUNC) &_stars_CPL_gdalrasterize, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_stars(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
