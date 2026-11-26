#pragma once
#include "CoreMinimal.h"
#include "SingleTargetWithSelectionTool.h"
#include "BaseMeshProcessingTool.generated.h"

class UMeshOpPreviewWithBackgroundCompute;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseMeshProcessingTool : public USingleTargetWithSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
public:
    UBaseMeshProcessingTool();

};

