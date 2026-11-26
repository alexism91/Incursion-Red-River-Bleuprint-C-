#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Sphere -FallbackName=Sphere
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ComputeNegativeSpaceOptions.h"
#include "GeometryScriptCollisionFromMeshOptions.h"
#include "GeometryScriptConvexHullApproximationOptions.h"
#include "GeometryScriptConvexHullSimplificationOptions.h"
#include "GeometryScriptDynamicMeshBVH.h"
#include "GeometryScriptMergeSimpleCollisionOptions.h"
#include "GeometryScriptSetSimpleCollisionOptions.h"
#include "GeometryScriptSetStaticMeshCollisionOptions.h"
#include "GeometryScriptSimpleCollision.h"
#include "GeometryScriptSphereCovering.h"
#include "GeometryScriptTransformCollisionOptions.h"
#include "NavigableConvexDecompositionOptions.h"
#include "GeometryScriptLibrary_CollisionFunctions.generated.h"

class UDynamicMesh;
class UDynamicMeshComponent;
class UGeometryScriptDebug;
class UPrimitiveComponent;
class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_CollisionFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_CollisionFunctions();

    UFUNCTION(BlueprintCallable)
    static FGeometryScriptSimpleCollision TransformSimpleCollisionShapes(const FGeometryScriptSimpleCollision& SimpleCollision, FTransform Transform, const FGeometryScriptTransformCollisionOptions& TransformOptions, bool& bSuccess, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static bool StaticMeshHasCustomizedCollision(UStaticMesh* StaticMeshAsset);
    
    UFUNCTION(BlueprintCallable)
    static void SimplifyConvexHulls(UPARAM(Ref) FGeometryScriptSimpleCollision& SimpleCollision, const FGeometryScriptConvexHullSimplificationOptions& SimplifyOptions, bool& bHasSimplified, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static bool SetStaticMeshCustomComplexCollision(UStaticMesh* StaticMeshAsset, UStaticMesh* StaticMeshCollisionAsset, bool bEmitTransaction, bool bMarkCollisionAsCustomized, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetStaticMeshCollisionFromMesh(UDynamicMesh* FromDynamicMesh, UStaticMesh* ToStaticMeshAsset, FGeometryScriptCollisionFromMeshOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void SetStaticMeshCollisionFromComponent(UStaticMesh* StaticMeshAsset, UPrimitiveComponent* SourceComponent, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void SetSimpleCollisionOfStaticMesh(const FGeometryScriptSimpleCollision& SimpleCollision, UStaticMesh* StaticMesh, FGeometryScriptSetSimpleCollisionOptions Options, FGeometryScriptSetStaticMeshCollisionOptions StaticMeshCollisionOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void SetSimpleCollisionOfDynamicMeshComponent(const FGeometryScriptSimpleCollision& SimpleCollision, UDynamicMeshComponent* DynamicMeshComponent, FGeometryScriptSetSimpleCollisionOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetDynamicMeshCollisionFromMesh(UDynamicMesh* FromDynamicMesh, UDynamicMeshComponent* ToDynamicMeshComponent, FGeometryScriptCollisionFromMeshOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void ResetSimpleCollision(UPARAM(Ref) FGeometryScriptSimpleCollision& SimpleCollision);
    
    UFUNCTION(BlueprintCallable)
    static void ResetDynamicMeshCollision(UDynamicMeshComponent* Component, bool bEmitTransaction, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptSimpleCollision MergeSimpleCollisionShapes(const FGeometryScriptSimpleCollision& SimpleCollision, const FGeometryScriptMergeSimpleCollisionOptions& MergeOptions, bool& bHasMerged, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetSimpleCollisionShapeCount(const FGeometryScriptSimpleCollision& SimpleCollision);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptSimpleCollision GetSimpleCollisionFromStaticMesh(UStaticMesh* StaticMesh, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptSimpleCollision GetSimpleCollisionFromComponent(UPrimitiveComponent* Component, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptSimpleCollision GenerateCollisionFromMesh(UDynamicMesh* FromDynamicMesh, FGeometryScriptCollisionFromMeshOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGeometryScriptSphereCovering Conv_SphereArrayToGeometryScriptSphereCovering(const TArray<FSphere>& Spheres);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FSphere> Conv_GeometryScriptSphereCoveringToSphereArray(const FGeometryScriptSphereCovering& SphereCovering);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptSphereCovering ComputeNegativeSpace(const FGeometryScriptDynamicMeshBVH& MeshBVH, const FComputeNegativeSpaceOptions& NegativeSpaceOptions, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static FGeometryScriptSimpleCollision ComputeNavigableConvexDecomposition(const UDynamicMesh* TargetMesh, const FNavigableConvexDecompositionOptions& Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void CombineSimpleCollisionArray(const TArray<FGeometryScriptSimpleCollision>& SimpleCollisionArray, FGeometryScriptSimpleCollision& SimpleCollision, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void CombineSimpleCollision(UPARAM(Ref) FGeometryScriptSimpleCollision& CollisionToUpdate, const FGeometryScriptSimpleCollision& AppendCollision, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static void ApproximateConvexHullsWithSimplerCollisionShapes(UPARAM(Ref) FGeometryScriptSimpleCollision& SimpleCollision, const FGeometryScriptConvexHullApproximationOptions& ApproximateOptions, bool& bHasApproximated, UGeometryScriptDebug* Debug);
    
};

