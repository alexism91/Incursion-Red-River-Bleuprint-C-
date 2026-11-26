#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "PlaneCutTool.generated.h"

class UConstructionPlaneMechanic;
class UDynamicMeshReplacementChangeTarget;
class UMeshOpPreviewWithBackgroundCompute;
class UPlaneCutToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPlaneCutTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaneCutToolProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicMeshReplacementChangeTarget*> MeshesToCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstructionPlaneMechanic* PlaneMechanic;
    
public:
    UPlaneCutTool();

protected:
    UFUNCTION(BlueprintCallable)
    void FlipPlane();
    
    UFUNCTION(BlueprintCallable)
    void Cut();
    
};

