#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionTool -FallbackName=SingleTargetWithSelectionTool
#include "WeldMeshEdgesTool.generated.h"

class UMeshElementsVisualizer;
class UMeshOpPreviewWithBackgroundCompute;
class UWeldMeshEdgesOperatorFactory;
class UWeldMeshEdgesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UWeldMeshEdgesTool : public USingleTargetWithSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeldMeshEdgesToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* PreviewCompute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshElementsVisualizer* MeshElementsDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeldMeshEdgesOperatorFactory* OperatorFactory;
    
public:
    UWeldMeshEdgesTool();

};

