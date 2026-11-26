#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionTool -FallbackName=SingleTargetWithSelectionTool
#include "OffsetMeshSelectionTool.generated.h"

class UMeshOpPreviewWithBackgroundCompute;
class UOffsetMeshSelectionToolProperties;
class UPreviewMesh;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UOffsetMeshSelectionTool : public USingleTargetWithSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOffsetMeshSelectionToolProperties* OffsetProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* SourcePreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* EditCompute;
    
public:
    UOffsetMeshSelectionTool();

};

