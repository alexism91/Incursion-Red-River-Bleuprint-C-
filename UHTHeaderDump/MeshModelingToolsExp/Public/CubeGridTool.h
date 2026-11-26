#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolCameraFocusAPI -FallbackName=InteractiveToolCameraFocusAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolNestedAcceptCancelAPI -FallbackName=InteractiveToolNestedAcceptCancelAPI
#include "CubeGridTool.generated.h"

class UClickDragInputBehavior;
class UCombinedTransformGizmo;
class UCreateMeshObjectTypeProperties;
class UCubeGridToolActions;
class UCubeGridToolProperties;
class UDragAlignmentMechanic;
class ULocalClickDragInputBehavior;
class ULocalSingleClickInputBehavior;
class UMeshOpPreviewWithBackgroundCompute;
class UMouseHoverBehavior;
class UNewMeshMaterialProperties;
class UPreviewGeometry;
class UToolTarget;
class UTransformProxy;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UCubeGridTool : public UInteractiveTool, public IInteractiveToolNestedAcceptCancelAPI, public IInteractiveToolCameraFocusAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* GridGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDragAlignmentMechanic* GridGizmoAlignmentMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* GridGizmoTransformProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* LineSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClickDragInputBehavior* ClickDragBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMouseHoverBehavior* HoverBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalSingleClickInputBehavior* CtrlMiddleClickBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULocalClickDragInputBehavior* MiddleClickDragBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCubeGridToolProperties* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCubeGridToolActions* ToolActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UToolTarget* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
public:
    UCubeGridTool();


    // Fix for true pure virtual functions not being implemented
};

