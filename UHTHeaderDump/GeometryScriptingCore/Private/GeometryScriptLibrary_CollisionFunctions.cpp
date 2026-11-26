#include "GeometryScriptLibrary_CollisionFunctions.h"

UGeometryScriptLibrary_CollisionFunctions::UGeometryScriptLibrary_CollisionFunctions() {
}

FGeometryScriptSimpleCollision UGeometryScriptLibrary_CollisionFunctions::TransformSimpleCollisionShapes(const FGeometryScriptSimpleCollision& SimpleCollision, FTransform Transform, const FGeometryScriptTransformCollisionOptions& TransformOptions, bool& bSuccess, UGeometryScriptDebug* Debug) {
    return FGeometryScriptSimpleCollision{};
}

bool UGeometryScriptLibrary_CollisionFunctions::StaticMeshHasCustomizedCollision(UStaticMesh* StaticMeshAsset) {
    return false;
}

void UGeometryScriptLibrary_CollisionFunctions::SimplifyConvexHulls(FGeometryScriptSimpleCollision& SimpleCollision, const FGeometryScriptConvexHullSimplificationOptions& SimplifyOptions, bool& bHasSimplified, UGeometryScriptDebug* Debug) {
}

bool UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCustomComplexCollision(UStaticMesh* StaticMeshAsset, UStaticMesh* StaticMeshCollisionAsset, bool bEmitTransaction, bool bMarkCollisionAsCustomized, UGeometryScriptDebug* Debug) {
    return false;
}

UDynamicMesh* UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromMesh(UDynamicMesh* FromDynamicMesh, UStaticMesh* ToStaticMeshAsset, FGeometryScriptCollisionFromMeshOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug* Debug) {
    return NULL;
}

void UGeometryScriptLibrary_CollisionFunctions::SetStaticMeshCollisionFromComponent(UStaticMesh* StaticMeshAsset, UPrimitiveComponent* SourceComponent, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug* Debug) {
}

void UGeometryScriptLibrary_CollisionFunctions::SetSimpleCollisionOfStaticMesh(const FGeometryScriptSimpleCollision& SimpleCollision, UStaticMesh* StaticMesh, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug* Debug) {
}

void UGeometryScriptLibrary_CollisionFunctions::SetSimpleCollisionOfDynamicMeshComponent(const FGeometryScriptSimpleCollision& SimpleCollision, UDynamicMeshComponent* DynamicMeshComponent, FGeometryScriptSetSimpleCollisionOptions Options, UGeometryScriptDebug* Debug) {
}

UDynamicMesh* UGeometryScriptLibrary_CollisionFunctions::SetDynamicMeshCollisionFromMesh(UDynamicMesh* FromDynamicMesh, UDynamicMeshComponent* ToDynamicMeshComponent, FGeometryScriptCollisionFromMeshOptions Options, UGeometryScriptDebug* Debug) {
    return NULL;
}

void UGeometryScriptLibrary_CollisionFunctions::ResetSimpleCollision(FGeometryScriptSimpleCollision& SimpleCollision) {
}

void UGeometryScriptLibrary_CollisionFunctions::ResetDynamicMeshCollision(UDynamicMeshComponent* Component, bool bEmitTransaction, UGeometryScriptDebug* Debug) {
}

FGeometryScriptSimpleCollision UGeometryScriptLibrary_CollisionFunctions::MergeSimpleCollisionShapes(const FGeometryScriptSimpleCollision& SimpleCollision, const FGeometryScriptMergeSimpleCollisionOptions& MergeOptions, bool& bHasMerged, UGeometryScriptDebug* Debug) {
    return FGeometryScriptSimpleCollision{};
}

int32 UGeometryScriptLibrary_CollisionFunctions::GetSimpleCollisionShapeCount(const FGeometryScriptSimpleCollision& SimpleCollision) {
    return 0;
}

FGeometryScriptSimpleCollision UGeometryScriptLibrary_CollisionFunctions::GetSimpleCollisionFromStaticMesh(UStaticMesh* StaticMesh, UGeometryScriptDebug* Debug) {
    return FGeometryScriptSimpleCollision{};
}

FGeometryScriptSimpleCollision UGeometryScriptLibrary_CollisionFunctions::GetSimpleCollisionFromComponent(UPrimitiveComponent* Component, UGeometryScriptDebug* Debug) {
    return FGeometryScriptSimpleCollision{};
}

FGeometryScriptSimpleCollision UGeometryScriptLibrary_CollisionFunctions::GenerateCollisionFromMesh(UDynamicMesh* FromDynamicMesh, FGeometryScriptCollisionFromMeshOptions Options, UGeometryScriptDebug* Debug) {
    return FGeometryScriptSimpleCollision{};
}

FGeometryScriptSphereCovering UGeometryScriptLibrary_CollisionFunctions::Conv_SphereArrayToGeometryScriptSphereCovering(const TArray<FSphere>& Spheres) {
    return FGeometryScriptSphereCovering{};
}

TArray<FSphere> UGeometryScriptLibrary_CollisionFunctions::Conv_GeometryScriptSphereCoveringToSphereArray(const FGeometryScriptSphereCovering& SphereCovering) {
    return TArray<FSphere>();
}

FGeometryScriptSphereCovering UGeometryScriptLibrary_CollisionFunctions::ComputeNegativeSpace(const FGeometryScriptDynamicMeshBVH& MeshBVH, const FComputeNegativeSpaceOptions& NegativeSpaceOptions, UGeometryScriptDebug* Debug) {
    return FGeometryScriptSphereCovering{};
}

FGeometryScriptSimpleCollision UGeometryScriptLibrary_CollisionFunctions::ComputeNavigableConvexDecomposition(const UDynamicMesh* TargetMesh, const FNavigableConvexDecompositionOptions& Options, UGeometryScriptDebug* Debug) {
    return FGeometryScriptSimpleCollision{};
}

void UGeometryScriptLibrary_CollisionFunctions::CombineSimpleCollisionArray(const TArray<FGeometryScriptSimpleCollision>& SimpleCollisionArray, FGeometryScriptSimpleCollision& SimpleCollision, UGeometryScriptDebug* Debug) {
}

void UGeometryScriptLibrary_CollisionFunctions::CombineSimpleCollision(FGeometryScriptSimpleCollision& CollisionToUpdate, const FGeometryScriptSimpleCollision& AppendCollision, UGeometryScriptDebug* Debug) {
}

void UGeometryScriptLibrary_CollisionFunctions::ApproximateConvexHullsWithSimplerCollisionShapes(FGeometryScriptSimpleCollision& SimpleCollision, const FGeometryScriptConvexHullApproximationOptions& ApproximateOptions, bool& bHasApproximated, UGeometryScriptDebug* Debug) {
}


