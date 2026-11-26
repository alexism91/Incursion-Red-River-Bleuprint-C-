#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveTool -FallbackName=InteractiveTool
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
#include "DrawPolyPathTool.generated.h"

class UCollectSurfacePathMechanic;
class UConstructionPlaneMechanic;
class UCreateMeshObjectTypeProperties;
class UDrawPolyPathExtrudeProperties;
class UDrawPolyPathProperties;
class UNewMeshMaterialProperties;
class UPlaneDistanceFromHitMechanic;
class UPolyEditPreviewMesh;
class USpatialCurveDistanceMechanic;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDrawPolyPathTool : public UInteractiveTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCreateMeshObjectTypeProperties* OutputTypeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrawPolyPathProperties* TransformProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrawPolyPathExtrudeProperties* ExtrudeProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNewMeshMaterialProperties* MaterialProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstructionPlaneMechanic* PlaneMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditPreviewMesh* EditPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlaneDistanceFromHitMechanic* ExtrudeHeightMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpatialCurveDistanceMechanic* CurveDistMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCollectSurfacePathMechanic* SurfacePathMechanic;
    
public:
    UDrawPolyPathTool();


    // Fix for true pure virtual functions not being implemented
};

