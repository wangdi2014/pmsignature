// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// boundaryTurbo_F
bool boundaryTurbo_F(NumericVector turboF, NumericVector fdim, int signatureNum);
RcppExport SEXP pmsignature_boundaryTurbo_F(SEXP turboFSEXP, SEXP fdimSEXP, SEXP signatureNumSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type turboF(turboFSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fdim(fdimSEXP);
    Rcpp::traits::input_parameter< int >::type signatureNum(signatureNumSEXP);
    __result = Rcpp::wrap(boundaryTurbo_F(turboF, fdim, signatureNum));
    return __result;
END_RCPP
}
// boundaryTurbo_Q
bool boundaryTurbo_Q(NumericVector turboQ, int signatureNum, int sampleNum);
RcppExport SEXP pmsignature_boundaryTurbo_Q(SEXP turboQSEXP, SEXP signatureNumSEXP, SEXP sampleNumSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type turboQ(turboQSEXP);
    Rcpp::traits::input_parameter< int >::type signatureNum(signatureNumSEXP);
    Rcpp::traits::input_parameter< int >::type sampleNum(sampleNumSEXP);
    __result = Rcpp::wrap(boundaryTurbo_Q(turboQ, signatureNum, sampleNum));
    return __result;
END_RCPP
}
// convertToTurbo_Q
NumericVector convertToTurbo_Q(NumericVector vQ, int signatureNum, int sampleNum);
RcppExport SEXP pmsignature_convertToTurbo_Q(SEXP vQSEXP, SEXP signatureNumSEXP, SEXP sampleNumSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type vQ(vQSEXP);
    Rcpp::traits::input_parameter< int >::type signatureNum(signatureNumSEXP);
    Rcpp::traits::input_parameter< int >::type sampleNum(sampleNumSEXP);
    __result = Rcpp::wrap(convertToTurbo_Q(vQ, signatureNum, sampleNum));
    return __result;
END_RCPP
}
// convertToTurbo_F
NumericVector convertToTurbo_F(NumericVector vF, NumericVector fdim, int signatureNum, bool isBackground);
RcppExport SEXP pmsignature_convertToTurbo_F(SEXP vFSEXP, SEXP fdimSEXP, SEXP signatureNumSEXP, SEXP isBackgroundSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type vF(vFSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fdim(fdimSEXP);
    Rcpp::traits::input_parameter< int >::type signatureNum(signatureNumSEXP);
    Rcpp::traits::input_parameter< bool >::type isBackground(isBackgroundSEXP);
    __result = Rcpp::wrap(convertToTurbo_F(vF, fdim, signatureNum, isBackground));
    return __result;
END_RCPP
}
// convertFromTurbo_Q
NumericVector convertFromTurbo_Q(NumericVector turboQ, int signatureNum, int sampleNum);
RcppExport SEXP pmsignature_convertFromTurbo_Q(SEXP turboQSEXP, SEXP signatureNumSEXP, SEXP sampleNumSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type turboQ(turboQSEXP);
    Rcpp::traits::input_parameter< int >::type signatureNum(signatureNumSEXP);
    Rcpp::traits::input_parameter< int >::type sampleNum(sampleNumSEXP);
    __result = Rcpp::wrap(convertFromTurbo_Q(turboQ, signatureNum, sampleNum));
    return __result;
END_RCPP
}
// convertFromTurbo_F
NumericVector convertFromTurbo_F(NumericVector turboF, NumericVector fdim, int signatureNum, bool isBackground);
RcppExport SEXP pmsignature_convertFromTurbo_F(SEXP turboFSEXP, SEXP fdimSEXP, SEXP signatureNumSEXP, SEXP isBackgroundSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type turboF(turboFSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fdim(fdimSEXP);
    Rcpp::traits::input_parameter< int >::type signatureNum(signatureNumSEXP);
    Rcpp::traits::input_parameter< bool >::type isBackground(isBackgroundSEXP);
    __result = Rcpp::wrap(convertFromTurbo_F(turboF, fdim, signatureNum, isBackground));
    return __result;
END_RCPP
}
// updateTheta_NormalizedC
NumericVector updateTheta_NormalizedC(NumericVector vPatternList, NumericVector vSparseCount, NumericVector vF, NumericVector vQ, NumericVector fdim, int signatureNum, int sampleNum, int patternNum, int samplePatternNum, bool isBackground, NumericVector vF0);
RcppExport SEXP pmsignature_updateTheta_NormalizedC(SEXP vPatternListSEXP, SEXP vSparseCountSEXP, SEXP vFSEXP, SEXP vQSEXP, SEXP fdimSEXP, SEXP signatureNumSEXP, SEXP sampleNumSEXP, SEXP patternNumSEXP, SEXP samplePatternNumSEXP, SEXP isBackgroundSEXP, SEXP vF0SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type vPatternList(vPatternListSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vSparseCount(vSparseCountSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vF(vFSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vQ(vQSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fdim(fdimSEXP);
    Rcpp::traits::input_parameter< int >::type signatureNum(signatureNumSEXP);
    Rcpp::traits::input_parameter< int >::type sampleNum(sampleNumSEXP);
    Rcpp::traits::input_parameter< int >::type patternNum(patternNumSEXP);
    Rcpp::traits::input_parameter< int >::type samplePatternNum(samplePatternNumSEXP);
    Rcpp::traits::input_parameter< bool >::type isBackground(isBackgroundSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vF0(vF0SEXP);
    __result = Rcpp::wrap(updateTheta_NormalizedC(vPatternList, vSparseCount, vF, vQ, fdim, signatureNum, sampleNum, patternNum, samplePatternNum, isBackground, vF0));
    return __result;
END_RCPP
}
// getLogLikelihoodC
double getLogLikelihoodC(NumericVector vPatternList, NumericVector vSparseCount, NumericVector vF, NumericVector vQ, NumericVector fdim, int signatureNum, int sampleNum, int patternNum, int samplePatternNum, bool isBackground, NumericVector vF0);
RcppExport SEXP pmsignature_getLogLikelihoodC(SEXP vPatternListSEXP, SEXP vSparseCountSEXP, SEXP vFSEXP, SEXP vQSEXP, SEXP fdimSEXP, SEXP signatureNumSEXP, SEXP sampleNumSEXP, SEXP patternNumSEXP, SEXP samplePatternNumSEXP, SEXP isBackgroundSEXP, SEXP vF0SEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type vPatternList(vPatternListSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vSparseCount(vSparseCountSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vF(vFSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vQ(vQSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fdim(fdimSEXP);
    Rcpp::traits::input_parameter< int >::type signatureNum(signatureNumSEXP);
    Rcpp::traits::input_parameter< int >::type sampleNum(sampleNumSEXP);
    Rcpp::traits::input_parameter< int >::type patternNum(patternNumSEXP);
    Rcpp::traits::input_parameter< int >::type samplePatternNum(samplePatternNumSEXP);
    Rcpp::traits::input_parameter< bool >::type isBackground(isBackgroundSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vF0(vF0SEXP);
    __result = Rcpp::wrap(getLogLikelihoodC(vPatternList, vSparseCount, vF, vQ, fdim, signatureNum, sampleNum, patternNum, samplePatternNum, isBackground, vF0));
    return __result;
END_RCPP
}
// updateMstepFQC
NumericVector updateMstepFQC(NumericVector vPatternList, NumericVector vSparseCount, NumericVector nTheta, NumericVector fdim, int signatureNum, int sampleNum, int patternNum, int samplePatternNum, bool isBackground);
RcppExport SEXP pmsignature_updateMstepFQC(SEXP vPatternListSEXP, SEXP vSparseCountSEXP, SEXP nThetaSEXP, SEXP fdimSEXP, SEXP signatureNumSEXP, SEXP sampleNumSEXP, SEXP patternNumSEXP, SEXP samplePatternNumSEXP, SEXP isBackgroundSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector >::type vPatternList(vPatternListSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vSparseCount(vSparseCountSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type nTheta(nThetaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fdim(fdimSEXP);
    Rcpp::traits::input_parameter< int >::type signatureNum(signatureNumSEXP);
    Rcpp::traits::input_parameter< int >::type sampleNum(sampleNumSEXP);
    Rcpp::traits::input_parameter< int >::type patternNum(patternNumSEXP);
    Rcpp::traits::input_parameter< int >::type samplePatternNum(samplePatternNumSEXP);
    Rcpp::traits::input_parameter< bool >::type isBackground(isBackgroundSEXP);
    __result = Rcpp::wrap(updateMstepFQC(vPatternList, vSparseCount, nTheta, fdim, signatureNum, sampleNum, patternNum, samplePatternNum, isBackground));
    return __result;
END_RCPP
}
