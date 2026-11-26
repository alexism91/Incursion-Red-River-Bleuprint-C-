#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EGeometryScriptMathWarpType.h"
#include "GeometryScriptBendWarpOptions.h"
#include "GeometryScriptDisplaceFromTextureOptions.h"
#include "GeometryScriptFlareWarpOptions.h"
#include "GeometryScriptIterativeMeshSmoothingOptions.h"
#include "GeometryScriptMathWarpOptions.h"
#include "GeometryScriptMeshSelection.h"
#include "GeometryScriptPerlinNoiseOptions.h"
#include "GeometryScriptTwistWarpOptions.h"
#include "GeometryScriptVectorList.h"
#include "GeometryScriptLibrary_MeshDeformFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshDeformFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshDeformFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyTwistWarpToMesh(UDynamicMesh* TargetMesh, FGeometryScriptTwistWarpOptions Options, FTransform TwistOrientation, float TwistAngle, float TwistExtent, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyPerlinNoiseToMesh(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptPerlinNoiseOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyMathWarpToMesh(UDynamicMesh* TargetMesh, FTransform WarpOrientation, EGeometryScriptMathWarpType WarpType, FGeometryScriptMathWarpOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyIterativeSmoothingToMesh(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, FGeometryScriptIterativeMeshSmoothingOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyFlareWarpToMesh(UDynamicMesh* TargetMesh, FGeometryScriptFlareWarpOptions Options, FTransform FlareOrientation, float FlarePercentX, float FlarePercentY, float FlareExtent, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyDisplaceFromTextureMap(UDynamicMesh* TargetMesh, UTexture2D* Texture, FGeometryScriptMeshSelection Selection, FGeometryScriptDisplaceFromTextureOptions Options, int32 UVLayer, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyDisplaceFromPerVertexVectors(UDynamicMesh* TargetMesh, FGeometryScriptMeshSelection Selection, const FGeometryScriptVectorList& VectorList, float Magnitude, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* ApplyBendWarpToMesh(UDynamicMesh* TargetMesh, FGeometryScriptBendWarpOptions Options, FTransform BendOrientation, float BendAngle, float BendExtent, UGeometryScriptDebug* Debug);
    
};

