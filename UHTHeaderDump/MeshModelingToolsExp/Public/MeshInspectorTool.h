#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "MeshInspectorTool.generated.h"

class ULineSetComponent;
class UMaterialInterface;
class UMeshInspectorMaterialProperties;
class UMeshInspectorProperties;
class UPolygroupLayersProperties;
class UPreviewMesh;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshInspectorTool : public USingleSelectionMeshEditingTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshInspectorProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshInspectorMaterialProperties* MaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULineSetComponent* DrawnLineSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DefaultMaterial;
    
public:
    UMeshInspectorTool();


    // Fix for true pure virtual functions not being implemented
};

