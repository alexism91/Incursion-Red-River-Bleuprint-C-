#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "MirrorTool.generated.h"

class UConstructionPlaneMechanic;
class UCreateMeshObjectTypeProperties;
class UDynamicMeshReplacementChangeTarget;
class UMeshOpPreviewWithBackgroundCompute;
class UMirrorToolActionPropertySet;
class UMirrorToolProperties;
class UOnAcceptHandleSourcesProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMirrorTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOnAcceptHandleSourcesProperties* HandleSourcesProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorToolActionPropertySet* ToolActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDynamicMeshReplacementChangeTarget*> MeshesToMirror;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstructionPlaneMechanic* PlaneMechanic;
    
public:
    UMirrorTool();

};

