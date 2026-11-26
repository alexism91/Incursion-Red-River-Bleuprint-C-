#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "EditNormalsTool.generated.h"

class UEditNormalsToolProperties;
class UGeometrySelectionVisualizationProperties;
class UMeshOpPreviewWithBackgroundCompute;
class UPolygroupLayersProperties;
class UPreviewGeometry;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditNormalsTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditNormalsToolProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshOpPreviewWithBackgroundCompute*> Previews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometrySelectionVisualizationProperties* GeometrySelectionVizProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* GeometrySelectionViz;
    
public:
    UEditNormalsTool();


    // Fix for true pure virtual functions not being implemented
};

