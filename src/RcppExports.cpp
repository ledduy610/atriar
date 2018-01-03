// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "atriar_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// create_searcher
XPtr<Searcher> create_searcher(NumericMatrix x, const string metric, const long exclude_samples, const long cluster_max_points);
RcppExport SEXP _atriar_create_searcher(SEXP xSEXP, SEXP metricSEXP, SEXP exclude_samplesSEXP, SEXP cluster_max_pointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const string >::type metric(metricSEXP);
    Rcpp::traits::input_parameter< const long >::type exclude_samples(exclude_samplesSEXP);
    Rcpp::traits::input_parameter< const long >::type cluster_max_points(cluster_max_pointsSEXP);
    rcpp_result_gen = Rcpp::wrap(create_searcher(x, metric, exclude_samples, cluster_max_points));
    return rcpp_result_gen;
END_RCPP
}
// release_searcher
bool release_searcher(XPtr<Searcher> searcher);
RcppExport SEXP _atriar_release_searcher(SEXP searcherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<Searcher> >::type searcher(searcherSEXP);
    rcpp_result_gen = Rcpp::wrap(release_searcher(searcher));
    return rcpp_result_gen;
END_RCPP
}
// number_of_points
long number_of_points(XPtr<Searcher> searcher);
RcppExport SEXP _atriar_number_of_points(SEXP searcherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<Searcher> >::type searcher(searcherSEXP);
    rcpp_result_gen = Rcpp::wrap(number_of_points(searcher));
    return rcpp_result_gen;
END_RCPP
}
// data_set_radius
double data_set_radius(XPtr<Searcher> searcher);
RcppExport SEXP _atriar_data_set_radius(SEXP searcherSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<Searcher> >::type searcher(searcherSEXP);
    rcpp_result_gen = Rcpp::wrap(data_set_radius(searcher));
    return rcpp_result_gen;
END_RCPP
}
// search_k_neighbors
List search_k_neighbors(XPtr<Searcher> searcher, const long k, NumericMatrix query_points, IntegerMatrix exclude, const double epsilon);
RcppExport SEXP _atriar_search_k_neighbors(SEXP searcherSEXP, SEXP kSEXP, SEXP query_pointsSEXP, SEXP excludeSEXP, SEXP epsilonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<Searcher> >::type searcher(searcherSEXP);
    Rcpp::traits::input_parameter< const long >::type k(kSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type query_points(query_pointsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type exclude(excludeSEXP);
    Rcpp::traits::input_parameter< const double >::type epsilon(epsilonSEXP);
    rcpp_result_gen = Rcpp::wrap(search_k_neighbors(searcher, k, query_points, exclude, epsilon));
    return rcpp_result_gen;
END_RCPP
}
// search_range
List search_range(XPtr<Searcher> searcher, const double radius, NumericMatrix query_points, IntegerMatrix exclude);
RcppExport SEXP _atriar_search_range(SEXP searcherSEXP, SEXP radiusSEXP, SEXP query_pointsSEXP, SEXP excludeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< XPtr<Searcher> >::type searcher(searcherSEXP);
    Rcpp::traits::input_parameter< const double >::type radius(radiusSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type query_points(query_pointsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type exclude(excludeSEXP);
    rcpp_result_gen = Rcpp::wrap(search_range(searcher, radius, query_points, exclude));
    return rcpp_result_gen;
END_RCPP
}
// boxcount
List boxcount(IntegerMatrix x, bool verbose);
RcppExport SEXP _atriar_boxcount(SEXP xSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(boxcount(x, verbose));
    return rcpp_result_gen;
END_RCPP
}
// count_integers
IntegerVector count_integers(IntegerVector bins, long max_bin);
RcppExport SEXP _atriar_count_integers(SEXP binsSEXP, SEXP max_binSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type bins(binsSEXP);
    Rcpp::traits::input_parameter< long >::type max_bin(max_binSEXP);
    rcpp_result_gen = Rcpp::wrap(count_integers(bins, max_bin));
    return rcpp_result_gen;
END_RCPP
}
// henon
NumericMatrix henon(long length, NumericVector params, long transient);
RcppExport SEXP _atriar_henon(SEXP lengthSEXP, SEXP paramsSEXP, SEXP transientSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< long >::type length(lengthSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    Rcpp::traits::input_parameter< long >::type transient(transientSEXP);
    rcpp_result_gen = Rcpp::wrap(henon(length, params, transient));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_atriar_create_searcher", (DL_FUNC) &_atriar_create_searcher, 4},
    {"_atriar_release_searcher", (DL_FUNC) &_atriar_release_searcher, 1},
    {"_atriar_number_of_points", (DL_FUNC) &_atriar_number_of_points, 1},
    {"_atriar_data_set_radius", (DL_FUNC) &_atriar_data_set_radius, 1},
    {"_atriar_search_k_neighbors", (DL_FUNC) &_atriar_search_k_neighbors, 5},
    {"_atriar_search_range", (DL_FUNC) &_atriar_search_range, 4},
    {"_atriar_boxcount", (DL_FUNC) &_atriar_boxcount, 2},
    {"_atriar_count_integers", (DL_FUNC) &_atriar_count_integers, 2},
    {"_atriar_henon", (DL_FUNC) &_atriar_henon, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_atriar(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
