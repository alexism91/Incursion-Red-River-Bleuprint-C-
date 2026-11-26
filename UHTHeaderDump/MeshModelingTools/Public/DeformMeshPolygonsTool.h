#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=MeshSurfacePointTool -FallbackName=MeshSurfacePointTool
#include "DeformMeshPolygonsTool.generated.h"

class AInternalToolFrameworkActor;
class UDeformMeshPolygonsTransformProperties;
class UDynamicMeshComponent;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDeformMeshPolygonsTool : public UMeshSurfacePointTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDeformMeshPolygonsTransformProperties* TransformProps;
    
public:
    UDeformMeshPolygonsTool();


    // Fix for true pure virtual functions not being implemented
};

