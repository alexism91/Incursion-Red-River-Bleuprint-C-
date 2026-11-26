#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolNestedAcceptCancelAPI -FallbackName=InteractiveToolNestedAcceptCancelAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshModelingTools -ObjectName=DynamicMeshBrushTool -FallbackName=DynamicMeshBrushTool
#include "MeshSelectionTool.generated.h"

class AActor;
class UMeshElementsVisualizer;
class UMeshSelectionEditActions;
class UMeshSelectionSet;
class UMeshSelectionToolActionPropertySet;
class UMeshSelectionToolProperties;
class UMeshStatisticsProperties;
class UMeshUVChannelProperties;
class UPolygroupLayersProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSelectionTool : public UDynamicMeshBrushTool, public IInteractiveToolNestedAcceptCancelAPI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshSelectionToolProperties* SelectionProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshSelectionEditActions* SelectionActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshSelectionToolActionPropertySet* EditActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshStatisticsProperties* MeshStatisticsProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshElementsVisualizer* MeshElementsDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshUVChannelProperties* UVChannelProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshSelectionSet* Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
public:
    UMeshSelectionTool();


    // Fix for true pure virtual functions not being implemented
};

