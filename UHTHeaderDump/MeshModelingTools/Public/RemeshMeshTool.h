#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "RemeshMeshTool.generated.h"

class UMeshElementsVisualizer;
class UMeshOpPreviewWithBackgroundCompute;
class UMeshStatisticsProperties;
class URemeshMeshToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URemeshMeshTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URemeshMeshToolProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshStatisticsProperties* MeshStatisticsProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshElementsVisualizer* MeshElementsDisplay;
    
    URemeshMeshTool();

};

