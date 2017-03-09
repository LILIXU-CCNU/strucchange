// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sc_cpp_rssi
arma::vec sc_cpp_rssi(const arma::vec& y, const arma::mat& X, int n, int i, const bool intercept_only, const double& tol, const double& rcond_min);
RcppExport SEXP strucchange_sc_cpp_rssi(SEXP ySEXP, SEXP XSEXP, SEXP nSEXP, SEXP iSEXP, SEXP intercept_onlySEXP, SEXP tolSEXP, SEXP rcond_minSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept_only(intercept_onlySEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double& >::type rcond_min(rcond_minSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_rssi(y, X, n, i, intercept_only, tol, rcond_min));
    return rcpp_result_gen;
END_RCPP
}
// sc_cpp_rss
double sc_cpp_rss(const arma::mat& rss_triang, const int i, const int j);
RcppExport SEXP strucchange_sc_cpp_rss(SEXP rss_triangSEXP, SEXP iSEXP, SEXP jSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type rss_triang(rss_triangSEXP);
    Rcpp::traits::input_parameter< const int >::type i(iSEXP);
    Rcpp::traits::input_parameter< const int >::type j(jSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_rss(rss_triang, i, j));
    return rcpp_result_gen;
END_RCPP
}
// sc_cpp_extend_rss_table
arma::mat sc_cpp_extend_rss_table(arma::mat& rss_table, const arma::mat& rss_triang, int n, int h, int breaks);
RcppExport SEXP strucchange_sc_cpp_extend_rss_table(SEXP rss_tableSEXP, SEXP rss_triangSEXP, SEXP nSEXP, SEXP hSEXP, SEXP breaksSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type rss_table(rss_tableSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type rss_triang(rss_triangSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type breaks(breaksSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_extend_rss_table(rss_table, rss_triang, n, h, breaks));
    return rcpp_result_gen;
END_RCPP
}
// sc_cpp_construct_rss_table
List sc_cpp_construct_rss_table(const arma::vec& y, const arma::mat& X, int n, int h, int breaks, const bool intercept_only, const double& tol, const double& rcond_min);
RcppExport SEXP strucchange_sc_cpp_construct_rss_table(SEXP ySEXP, SEXP XSEXP, SEXP nSEXP, SEXP hSEXP, SEXP breaksSEXP, SEXP intercept_onlySEXP, SEXP tolSEXP, SEXP rcond_minSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type h(hSEXP);
    Rcpp::traits::input_parameter< int >::type breaks(breaksSEXP);
    Rcpp::traits::input_parameter< const bool >::type intercept_only(intercept_onlySEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double& >::type rcond_min(rcond_minSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_construct_rss_table(y, X, n, h, breaks, intercept_only, tol, rcond_min));
    return rcpp_result_gen;
END_RCPP
}
// sc_cpp_efp_process_me
List sc_cpp_efp_process_me(const arma::mat& X, const arma::vec& y, bool rescale, double h);
RcppExport SEXP strucchange_sc_cpp_efp_process_me(SEXP XSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_efp_process_me(X, y, rescale, h));
    return rcpp_result_gen;
END_RCPP
}
// sc_cpp_efp_process_re
List sc_cpp_efp_process_re(const arma::mat& X, const arma::vec& y, bool rescale);
RcppExport SEXP strucchange_sc_cpp_efp_process_re(SEXP XSEXP, SEXP ySEXP, SEXP rescaleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_efp_process_re(X, y, rescale));
    return rcpp_result_gen;
END_RCPP
}
// sc_cpp_fstats
List sc_cpp_fstats(const arma::mat& X, const arma::vec& y, int istart, int iend, double& rcond_min);
RcppExport SEXP strucchange_sc_cpp_fstats(SEXP XSEXP, SEXP ySEXP, SEXP istartSEXP, SEXP iendSEXP, SEXP rcond_minSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type istart(istartSEXP);
    Rcpp::traits::input_parameter< int >::type iend(iendSEXP);
    Rcpp::traits::input_parameter< double& >::type rcond_min(rcond_minSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_fstats(X, y, istart, iend, rcond_min));
    return rcpp_result_gen;
END_RCPP
}
// sc_cpp_recresid
NumericVector sc_cpp_recresid(const arma::mat& X, const arma::vec& y, unsigned int start, unsigned int end, const double& tol, const double& rcond_min);
RcppExport SEXP strucchange_sc_cpp_recresid(SEXP XSEXP, SEXP ySEXP, SEXP startSEXP, SEXP endSEXP, SEXP tolSEXP, SEXP rcond_minSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< unsigned int >::type start(startSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type end(endSEXP);
    Rcpp::traits::input_parameter< const double& >::type tol(tolSEXP);
    Rcpp::traits::input_parameter< const double& >::type rcond_min(rcond_minSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_recresid(X, y, start, end, tol, rcond_min));
    return rcpp_result_gen;
END_RCPP
}
// sc_cpp_rootmatrix
arma::mat sc_cpp_rootmatrix(const arma::mat& X);
RcppExport SEXP strucchange_sc_cpp_rootmatrix(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_rootmatrix(X));
    return rcpp_result_gen;
END_RCPP
}
// sc_cpp_rootmatrix_cross
arma::mat sc_cpp_rootmatrix_cross(const arma::mat& X);
RcppExport SEXP strucchange_sc_cpp_rootmatrix_cross(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(sc_cpp_rootmatrix_cross(X));
    return rcpp_result_gen;
END_RCPP
}
