#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "PhysicsInspectorTool.generated.h"

class UCollisionGeometryVisualizationProperties;
class UPhysicsInspectorToolProperties;
class UPhysicsObjectToolPropertySet;
class UPreviewGeometry;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPhysicsInspectorTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCollisionGeometryVisualizationProperties* VizSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsInspectorToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPhysicsObjectToolPropertySet*> ObjectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UPreviewGeometry*> PreviewElements;
    
public:
    UPhysicsInspectorTool();


    // Fix for true pure virtual functions not being implemented
};

