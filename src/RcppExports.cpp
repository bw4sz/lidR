// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fast_table
IntegerVector fast_table(IntegerVector x, int size);
RcppExport SEXP _lidR_fast_table(SEXP xSEXP, SEXP sizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type size(sizeSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_table(x, size));
    return rcpp_result_gen;
END_RCPP
}
// fast_countequal
int fast_countequal(IntegerVector x, int t);
RcppExport SEXP _lidR_fast_countequal(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countequal(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_countbelow
int fast_countbelow(NumericVector x, double t);
RcppExport SEXP _lidR_fast_countbelow(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countbelow(x, t));
    return rcpp_result_gen;
END_RCPP
}
// fast_countover
int fast_countover(NumericVector x, double t);
RcppExport SEXP _lidR_fast_countover(SEXP xSEXP, SEXP tSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type t(tSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_countover(x, t));
    return rcpp_result_gen;
END_RCPP
}
// roundc
NumericVector roundc(NumericVector x, int digit);
RcppExport SEXP _lidR_roundc(SEXP xSEXP, SEXP digitSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type digit(digitSEXP);
    rcpp_result_gen = Rcpp::wrap(roundc(x, digit));
    return rcpp_result_gen;
END_RCPP
}
// C_dalponte2016
IntegerMatrix C_dalponte2016(NumericMatrix Image, IntegerMatrix Seeds, double th_seed, double th_crown, double th_tree, double DIST);
RcppExport SEXP _lidR_C_dalponte2016(SEXP ImageSEXP, SEXP SeedsSEXP, SEXP th_seedSEXP, SEXP th_crownSEXP, SEXP th_treeSEXP, SEXP DISTSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Image(ImageSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type Seeds(SeedsSEXP);
    Rcpp::traits::input_parameter< double >::type th_seed(th_seedSEXP);
    Rcpp::traits::input_parameter< double >::type th_crown(th_crownSEXP);
    Rcpp::traits::input_parameter< double >::type th_tree(th_treeSEXP);
    Rcpp::traits::input_parameter< double >::type DIST(DISTSEXP);
    rcpp_result_gen = Rcpp::wrap(C_dalponte2016(Image, Seeds, th_seed, th_crown, th_tree, DIST));
    return rcpp_result_gen;
END_RCPP
}
// C_knn
Rcpp::List C_knn(NumericVector X, NumericVector Y, NumericVector x, NumericVector y, int k);
RcppExport SEXP _lidR_C_knn(SEXP XSEXP, SEXP YSEXP, SEXP xSEXP, SEXP ySEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knn(X, Y, x, y, k));
    return rcpp_result_gen;
END_RCPP
}
// C_knnidw
NumericVector C_knnidw(NumericVector X, NumericVector Y, NumericVector Z, NumericVector x, NumericVector y, int k, double p);
RcppExport SEXP _lidR_C_knnidw(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP xSEXP, SEXP ySEXP, SEXP kSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    Rcpp::traits::input_parameter< double >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knnidw(X, Y, Z, x, y, k, p));
    return rcpp_result_gen;
END_RCPP
}
// C_lassmooth
NumericVector C_lassmooth(S4 las, double size, int method, int shape, double sigma);
RcppExport SEXP _lidR_C_lassmooth(SEXP lasSEXP, SEXP sizeSEXP, SEXP methodSEXP, SEXP shapeSEXP, SEXP sigmaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    Rcpp::traits::input_parameter< int >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lassmooth(las, size, method, shape, sigma));
    return rcpp_result_gen;
END_RCPP
}
// C_li2012
IntegerVector C_li2012(S4 las, double dt1, double dt2, double Zu, double R, double th_tree, double radius);
RcppExport SEXP _lidR_C_li2012(SEXP lasSEXP, SEXP dt1SEXP, SEXP dt2SEXP, SEXP ZuSEXP, SEXP RSEXP, SEXP th_treeSEXP, SEXP radiusSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< double >::type dt1(dt1SEXP);
    Rcpp::traits::input_parameter< double >::type dt2(dt2SEXP);
    Rcpp::traits::input_parameter< double >::type Zu(ZuSEXP);
    Rcpp::traits::input_parameter< double >::type R(RSEXP);
    Rcpp::traits::input_parameter< double >::type th_tree(th_treeSEXP);
    Rcpp::traits::input_parameter< double >::type radius(radiusSEXP);
    rcpp_result_gen = Rcpp::wrap(C_li2012(las, dt1, dt2, Zu, R, th_tree, radius));
    return rcpp_result_gen;
END_RCPP
}
// C_lmf
LogicalVector C_lmf(DataFrame data, NumericVector ws, double min_height, bool circular, int ncpu);
RcppExport SEXP _lidR_C_lmf(SEXP dataSEXP, SEXP wsSEXP, SEXP min_heightSEXP, SEXP circularSEXP, SEXP ncpuSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ws(wsSEXP);
    Rcpp::traits::input_parameter< double >::type min_height(min_heightSEXP);
    Rcpp::traits::input_parameter< bool >::type circular(circularSEXP);
    Rcpp::traits::input_parameter< int >::type ncpu(ncpuSEXP);
    rcpp_result_gen = Rcpp::wrap(C_lmf(data, ws, min_height, circular, ncpu));
    return rcpp_result_gen;
END_RCPP
}
// C_MorphologicalOpening
NumericVector C_MorphologicalOpening(NumericVector X, NumericVector Y, NumericVector Z, double resolution);
RcppExport SEXP _lidR_C_MorphologicalOpening(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP resolutionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< double >::type resolution(resolutionSEXP);
    rcpp_result_gen = Rcpp::wrap(C_MorphologicalOpening(X, Y, Z, resolution));
    return rcpp_result_gen;
END_RCPP
}
// R_p2r
NumericMatrix R_p2r(S4 las, NumericMatrix bbox, double res, double subcircle);
RcppExport SEXP _lidR_R_p2r(SEXP lasSEXP, SEXP bboxSEXP, SEXP resSEXP, SEXP subcircleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type bbox(bboxSEXP);
    Rcpp::traits::input_parameter< double >::type res(resSEXP);
    Rcpp::traits::input_parameter< double >::type subcircle(subcircleSEXP);
    rcpp_result_gen = Rcpp::wrap(R_p2r(las, bbox, res, subcircle));
    return rcpp_result_gen;
END_RCPP
}
// C_point_in_polygon
bool C_point_in_polygon(NumericVector vertx, NumericVector verty, double pointx, double pointy);
RcppExport SEXP _lidR_C_point_in_polygon(SEXP vertxSEXP, SEXP vertySEXP, SEXP pointxSEXP, SEXP pointySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vertx(vertxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type verty(vertySEXP);
    Rcpp::traits::input_parameter< double >::type pointx(pointxSEXP);
    Rcpp::traits::input_parameter< double >::type pointy(pointySEXP);
    rcpp_result_gen = Rcpp::wrap(C_point_in_polygon(vertx, verty, pointx, pointy));
    return rcpp_result_gen;
END_RCPP
}
// C_points_in_polygon
LogicalVector C_points_in_polygon(NumericVector vertx, NumericVector verty, NumericVector pointx, NumericVector pointy);
RcppExport SEXP _lidR_C_points_in_polygon(SEXP vertxSEXP, SEXP vertySEXP, SEXP pointxSEXP, SEXP pointySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vertx(vertxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type verty(vertySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointx(pointxSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pointy(pointySEXP);
    rcpp_result_gen = Rcpp::wrap(C_points_in_polygon(vertx, verty, pointx, pointy));
    return rcpp_result_gen;
END_RCPP
}
// C_points_in_polygon_wkt
LogicalVector C_points_in_polygon_wkt(NumericVector x, NumericVector y, std::string wkt);
RcppExport SEXP _lidR_C_points_in_polygon_wkt(SEXP xSEXP, SEXP ySEXP, SEXP wktSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string >::type wkt(wktSEXP);
    rcpp_result_gen = Rcpp::wrap(C_points_in_polygon_wkt(x, y, wkt));
    return rcpp_result_gen;
END_RCPP
}
// C_circle_lookup
IntegerVector C_circle_lookup(NumericVector X, NumericVector Y, double x, double y, double r);
RcppExport SEXP _lidR_C_circle_lookup(SEXP XSEXP, SEXP YSEXP, SEXP xSEXP, SEXP ySEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(C_circle_lookup(X, Y, x, y, r));
    return rcpp_result_gen;
END_RCPP
}
// C_knn3d_lookup
IntegerVector C_knn3d_lookup(NumericVector X, NumericVector Y, NumericVector Z, double x, double y, double z, int k);
RcppExport SEXP _lidR_C_knn3d_lookup(SEXP XSEXP, SEXP YSEXP, SEXP ZSEXP, SEXP xSEXP, SEXP ySEXP, SEXP zSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type X(XSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Y(YSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    Rcpp::traits::input_parameter< double >::type z(zSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(C_knn3d_lookup(X, Y, Z, x, y, z, k));
    return rcpp_result_gen;
END_RCPP
}
// C_tinfo
NumericMatrix C_tinfo(IntegerMatrix M, NumericMatrix X);
RcppExport SEXP _lidR_C_tinfo(SEXP MSEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tinfo(M, X));
    return rcpp_result_gen;
END_RCPP
}
// C_tsearch
IntegerVector C_tsearch(NumericVector x, NumericVector y, IntegerMatrix elem, NumericVector xi, NumericVector yi);
RcppExport SEXP _lidR_C_tsearch(SEXP xSEXP, SEXP ySEXP, SEXP elemSEXP, SEXP xiSEXP, SEXP yiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type elem(elemSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xi(xiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type yi(yiSEXP);
    rcpp_result_gen = Rcpp::wrap(C_tsearch(x, y, elem, xi, yi));
    return rcpp_result_gen;
END_RCPP
}
// C_Wing2015
IntegerVector C_Wing2015(S4 las, NumericVector neigh_radii, double low_int_thrsh, double uppr_int_thrsh, int pt_den_req, NumericMatrix BBPRthrsh_mat);
RcppExport SEXP _lidR_C_Wing2015(SEXP lasSEXP, SEXP neigh_radiiSEXP, SEXP low_int_thrshSEXP, SEXP uppr_int_thrshSEXP, SEXP pt_den_reqSEXP, SEXP BBPRthrsh_matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type las(lasSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type neigh_radii(neigh_radiiSEXP);
    Rcpp::traits::input_parameter< double >::type low_int_thrsh(low_int_thrshSEXP);
    Rcpp::traits::input_parameter< double >::type uppr_int_thrsh(uppr_int_thrshSEXP);
    Rcpp::traits::input_parameter< int >::type pt_den_req(pt_den_reqSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type BBPRthrsh_mat(BBPRthrsh_matSEXP);
    rcpp_result_gen = Rcpp::wrap(C_Wing2015(las, neigh_radii, low_int_thrsh, uppr_int_thrsh, pt_den_req, BBPRthrsh_mat));
    return rcpp_result_gen;
END_RCPP
}
// R_omp_get_max_threads
int R_omp_get_max_threads();
RcppExport SEXP _lidR_R_omp_get_max_threads() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(R_omp_get_max_threads());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_lidR_fast_table", (DL_FUNC) &_lidR_fast_table, 2},
    {"_lidR_fast_countequal", (DL_FUNC) &_lidR_fast_countequal, 2},
    {"_lidR_fast_countbelow", (DL_FUNC) &_lidR_fast_countbelow, 2},
    {"_lidR_fast_countover", (DL_FUNC) &_lidR_fast_countover, 2},
    {"_lidR_roundc", (DL_FUNC) &_lidR_roundc, 2},
    {"_lidR_C_dalponte2016", (DL_FUNC) &_lidR_C_dalponte2016, 6},
    {"_lidR_C_knn", (DL_FUNC) &_lidR_C_knn, 5},
    {"_lidR_C_knnidw", (DL_FUNC) &_lidR_C_knnidw, 7},
    {"_lidR_C_lassmooth", (DL_FUNC) &_lidR_C_lassmooth, 5},
    {"_lidR_C_li2012", (DL_FUNC) &_lidR_C_li2012, 7},
    {"_lidR_C_lmf", (DL_FUNC) &_lidR_C_lmf, 5},
    {"_lidR_C_MorphologicalOpening", (DL_FUNC) &_lidR_C_MorphologicalOpening, 4},
    {"_lidR_R_p2r", (DL_FUNC) &_lidR_R_p2r, 4},
    {"_lidR_C_point_in_polygon", (DL_FUNC) &_lidR_C_point_in_polygon, 4},
    {"_lidR_C_points_in_polygon", (DL_FUNC) &_lidR_C_points_in_polygon, 4},
    {"_lidR_C_points_in_polygon_wkt", (DL_FUNC) &_lidR_C_points_in_polygon_wkt, 3},
    {"_lidR_C_circle_lookup", (DL_FUNC) &_lidR_C_circle_lookup, 5},
    {"_lidR_C_knn3d_lookup", (DL_FUNC) &_lidR_C_knn3d_lookup, 7},
    {"_lidR_C_tinfo", (DL_FUNC) &_lidR_C_tinfo, 2},
    {"_lidR_C_tsearch", (DL_FUNC) &_lidR_C_tsearch, 5},
    {"_lidR_C_Wing2015", (DL_FUNC) &_lidR_C_Wing2015, 6},
    {"_lidR_R_omp_get_max_threads", (DL_FUNC) &_lidR_R_omp_get_max_threads, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_lidR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
