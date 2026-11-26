#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "ExtractSplineTool.generated.h"

class UConstructionPlaneMechanic;
class UExtractSplineToolProperties;
class UGenerateCrossSectionOpFactory;
class UMeshOpPreviewWithBackgroundCompute;
class UPolygonSelectionMechanic;
class UPreviewGeometry;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UExtractSplineTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExtractSplineToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstructionPlaneMechanic* PlaneMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygonSelectionMechanic* SelectionMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGenerateCrossSectionOpFactory* Factory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* CutlineGeometry;
    
public:
    UExtractSplineTool();

};

