#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolCameraFocusAPI -FallbackName=InteractiveToolCameraFocusAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SingleClickTool -FallbackName=SingleClickTool
#include "AddPrimitiveTool.generated.h"

class UCombinedTransformGizmo;
class UCreateMeshObjectTypeProperties;
class UDragAlignmentMechanic;
class UNewMeshMaterialProperties;
class UPreviewMesh;
class UProceduralShapeToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAddPrimitiveTool : public USingleClickTool, public IInteractiveToolCameraFocusAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UProceduralShapeToolProperties* ShapeSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* PreviewMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* Gizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AssetName;
    
public:
    UAddPrimitiveTool();


    // Fix for true pure virtual functions not being implemented
};

