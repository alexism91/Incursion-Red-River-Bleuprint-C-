#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "GeometryScriptSculptLayerUpdateOptions.h"
#include "GeometryScriptLibrary_MeshSculptLayersFunctions.generated.h"

class UDynamicMesh;
class UGeometryScriptDebug;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryScriptLibrary_MeshSculptLayersFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGeometryScriptLibrary_MeshSculptLayersFunctions();

    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetSculptLayerWeightsArray(UDynamicMesh* TargetMesh, TArray<double> Weights, FGeometryScriptSculptLayerUpdateOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetSculptLayerWeight(UDynamicMesh* TargetMesh, int32 LayerIndex, double Weight, FGeometryScriptSculptLayerUpdateOptions Options, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* SetActiveSculptLayer(UDynamicMesh* TargetMesh, int32 LayerIndex, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* MergeSculptLayers(UDynamicMesh* TargetMesh, int32& OutActiveLayer, int32 MergeLayerStart, int32 MergeLayerNum, bool bUseWeights, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static TArray<double> GetSculptLayerWeightsArray(UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetNumSculptLayers(const UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetActiveSculptLayer(const UDynamicMesh* TargetMesh);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* EnableSculptLayers(UDynamicMesh* TargetMesh, int32 NumLayers, UGeometryScriptDebug* Debug);
    
    UFUNCTION(BlueprintCallable)
    static UDynamicMesh* DiscardSculptLayers(UDynamicMesh* TargetMesh, UGeometryScriptDebug* Debug);
    
};

