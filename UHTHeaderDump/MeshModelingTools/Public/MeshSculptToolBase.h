#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointTool -FallbackName=MeshSurfacePointTool
#include "MeshSculptToolBase.generated.h"

class UBrushStampIndicator;
class UCombinedTransformGizmo;
class UMaterialInstanceDynamic;
class UMeshEditingViewProperties;
class UMeshSculptBrushOpProps;
class UPreviewMesh;
class USculptBrushProperties;
class UTransformProxy;
class UWorkPlaneProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSculptToolBase : public UMeshSurfacePointTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USculptBrushProperties* BrushProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorkPlaneProperties* GizmoProperties;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UMeshSculptBrushOpProps*> BrushOpPropSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, UMeshSculptBrushOpProps*> SecondaryBrushOpPropSets;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshEditingViewProperties* ViewProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ActiveOverrideMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrushStampIndicator* BrushIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsVolumetricIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BrushIndicatorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* BrushIndicatorMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* PlaneTransformGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* PlaneTransformProxy;
    
    UMeshSculptToolBase();

};

