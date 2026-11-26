#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointTool -FallbackName=MeshSurfacePointTool
#include "EditUVIslandsTool.generated.h"

class AInternalToolFrameworkActor;
class UCombinedTransformGizmo;
class UDynamicMeshComponent;
class UExistingMeshMaterialProperties;
class UMaterialInstanceDynamic;
class UPolygonSelectionMechanic;
class UTransformProxy;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditUVIslandsTool : public UMeshSurfacePointTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UExistingMeshMaterialProperties* MaterialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CheckerMaterial;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygonSelectionMechanic* SelectionMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* TransformGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* TransformProxy;
    
public:
    UEditUVIslandsTool();


    // Fix for true pure virtual functions not being implemented
};

