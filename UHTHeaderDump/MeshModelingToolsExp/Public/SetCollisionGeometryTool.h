#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "SetCollisionGeometryTool.generated.h"

class UCollisionGeometryVisualizationProperties;
class UGeometrySelectionVisualizationProperties;
class UPhysicsObjectToolPropertySet;
class UPolygroupLayersProperties;
class UPreviewGeometry;
class USetCollisionGeometryToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USetCollisionGeometryTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USetCollisionGeometryToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCollisionGeometryVisualizationProperties* VizSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsObjectToolPropertySet* CollisionProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* PreviewGeom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometrySelectionVisualizationProperties* GeometrySelectionVizProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* GeometrySelectionViz;
    
public:
    USetCollisionGeometryTool();


    // Fix for true pure virtual functions not being implemented
};

