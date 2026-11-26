#include "GeometryScriptLibrary_TransformFunctions.h"

UGeometryScriptLibrary_TransformFunctions::UGeometryScriptLibrary_TransformFunctions() {
}

FTransform UGeometryScriptLibrary_TransformFunctions::MakeTransformFromZAxis(FVector Location, FVector ZAxis) {
    return FTransform{};
}

FTransform UGeometryScriptLibrary_TransformFunctions::MakeTransformFromAxes(FVector Location, FVector ZAxis, FVector TangentAxis, bool bTangentIsX) {
    return FTransform{};
}

FVector UGeometryScriptLibrary_TransformFunctions::GetTransformAxisVector(FTransform Transform, EGeometryScriptAxis Axis) {
    return FVector{};
}

FRay UGeometryScriptLibrary_TransformFunctions::GetTransformAxisRay(FTransform Transform, EGeometryScriptAxis Axis) {
    return FRay{};
}

FPlane UGeometryScriptLibrary_TransformFunctions::GetTransformAxisPlane(FTransform Transform, EGeometryScriptAxis Axis) {
    return FPlane{};
}


