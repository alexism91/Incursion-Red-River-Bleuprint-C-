#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshModelingTools -ObjectName=DynamicMeshBrushTool -FallbackName=DynamicMeshBrushTool
#include "SeamSculptTool.generated.h"

class UPreviewGeometry;
class USeamSculptToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USeamSculptTool : public UDynamicMeshBrushTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USeamSculptToolProperties* Settings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* PreviewGeom;
    
public:
    USeamSculptTool();


    // Fix for true pure virtual functions not being implemented
};

