#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointTool -FallbackName=MeshSurfacePointTool
#include "DynamicMeshSculptTool.generated.h"

class AInternalToolFrameworkActor;
class UBrushRemeshProperties;
class UBrushStampIndicator;
class UCombinedTransformGizmo;
class UDynamicMeshBrushProperties;
class UDynamicMeshBrushSculptProperties;
class UDynamicSculptToolActions;
class UFixedPlaneBrushProperties;
class UKelvinBrushProperties;
class UMaterialInstanceDynamic;
class UMeshEditingViewProperties;
class UOctreeDynamicMeshComponent;
class UPreviewMesh;
class USculptMaxBrushProperties;
class UTransformProxy;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDynamicMeshSculptTool : public UMeshSurfacePointTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMeshBrushProperties* BrushProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMeshBrushSculptProperties* SculptProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USculptMaxBrushProperties* SculptMaxBrushProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UKelvinBrushProperties* KelvinBrushProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrushRemeshProperties* RemeshProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFixedPlaneBrushProperties* GizmoProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshEditingViewProperties* ViewProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicSculptToolActions* SculptToolActions;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBrushStampIndicator* BrushIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* BrushIndicatorMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewMesh* BrushIndicatorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOctreeDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ActiveOverrideMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* PlaneTransformGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* PlaneTransformProxy;
    
public:
    UDynamicMeshSculptTool();

};

