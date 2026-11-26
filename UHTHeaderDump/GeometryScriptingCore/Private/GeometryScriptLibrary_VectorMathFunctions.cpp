#include "GeometryScriptLibrary_VectorMathFunctions.h"

UGeometryScriptLibrary_VectorMathFunctions::UGeometryScriptLibrary_VectorMathFunctions() {
}

void UGeometryScriptLibrary_VectorMathFunctions::VectorTransformInPlace(FGeometryScriptVectorList& VectorList, FTransform Transform, bool bAsPosition) {
}

FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::VectorToScalar(FGeometryScriptVectorList VectorList, double ConstantX, double ConstantY, double ConstantZ) {
    return FGeometryScriptScalarList{};
}

void UGeometryScriptLibrary_VectorMathFunctions::VectorPlaneProjectInPlace(FGeometryScriptVectorList& VectorList, FPlane Plane) {
}

void UGeometryScriptLibrary_VectorMathFunctions::VectorNormalizeInPlace(FGeometryScriptVectorList& VectorList, FVector SetOnFailure) {
}

FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::VectorLength(FGeometryScriptVectorList VectorList) {
    return FGeometryScriptScalarList{};
}

void UGeometryScriptLibrary_VectorMathFunctions::VectorInverseTransformInPlace(FGeometryScriptVectorList& VectorList, FTransform Transform, bool bAsPosition) {
}

FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::VectorDot(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB) {
    return FGeometryScriptScalarList{};
}

FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorCross(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB) {
    return FGeometryScriptVectorList{};
}

void UGeometryScriptLibrary_VectorMathFunctions::VectorBlendInPlace(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList& VectorListB, double ConstantA, double ConstantB) {
}

FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::VectorBlend(FGeometryScriptVectorList VectorListA, FGeometryScriptVectorList VectorListB, double ConstantA, double ConstantB) {
    return FGeometryScriptVectorList{};
}

void UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiplyInPlace(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList& VectorList, double ScalarMultiplier) {
}

FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ScalarVectorMultiply(FGeometryScriptScalarList ScalarList, FGeometryScriptVectorList VectorList, double ScalarMultiplier) {
    return FGeometryScriptVectorList{};
}

void UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiplyInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantMultiplier) {
}

FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarMultiply(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantMultiplier) {
    return FGeometryScriptScalarList{};
}

void UGeometryScriptLibrary_VectorMathFunctions::ScalarInvertInPlace(FGeometryScriptScalarList& ScalarList, double Numerator, double SetOnFailure, double Epsilon) {
}

FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarInvert(FGeometryScriptScalarList ScalarList, double Numerator, double SetOnFailure, double Epsilon) {
    return FGeometryScriptScalarList{};
}

void UGeometryScriptLibrary_VectorMathFunctions::ScalarBlendInPlace(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList& ScalarListB, double ConstantA, double ConstantB) {
}

FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ScalarBlend(FGeometryScriptScalarList ScalarListA, FGeometryScriptScalarList ScalarListB, double ConstantA, double ConstantB) {
    return FGeometryScriptScalarList{};
}

void UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiplyInPlace(double Constant, FGeometryScriptVectorList& VectorList) {
}

FGeometryScriptVectorList UGeometryScriptLibrary_VectorMathFunctions::ConstantVectorMultiply(double Constant, FGeometryScriptVectorList VectorList) {
    return FGeometryScriptVectorList{};
}

void UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiplyInPlace(double Constant, FGeometryScriptScalarList& ScalarList) {
}

FGeometryScriptScalarList UGeometryScriptLibrary_VectorMathFunctions::ConstantScalarMultiply(double Constant, FGeometryScriptScalarList ScalarList) {
    return FGeometryScriptScalarList{};
}


