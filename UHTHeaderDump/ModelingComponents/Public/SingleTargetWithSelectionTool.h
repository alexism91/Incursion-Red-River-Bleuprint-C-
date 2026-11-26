#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SingleSelectionTool -FallbackName=SingleSelectionTool
#include "SingleTargetWithSelectionTool.generated.h"

class UGeometrySelectionVisualizationProperties;
class UPreviewGeometry;
class UWorld;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USingleTargetWithSelectionTool : public USingleSelectionTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> TargetWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometrySelectionVisualizationProperties* GeometrySelectionVizProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* GeometrySelectionViz;
    
public:
    USingleTargetWithSelectionTool();

};

