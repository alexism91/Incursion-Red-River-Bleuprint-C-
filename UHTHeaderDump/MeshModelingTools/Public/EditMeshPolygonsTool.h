#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=MeshVertexCommandChangeTarget -FallbackName=MeshVertexCommandChangeTarget
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolNestedAcceptCancelAPI -FallbackName=InteractiveToolNestedAcceptCancelAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionTool -FallbackName=SingleTargetWithSelectionTool
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=ToolActivityHost -FallbackName=ToolActivityHost
#include "EditMeshPolygonsTool.generated.h"

class UCombinedTransformGizmo;
class UDragAlignmentMechanic;
class UEditMeshPolygonsToolActions;
class UEditMeshPolygonsToolActions_Triangles;
class UEditMeshPolygonsToolEdgeActions;
class UEditMeshPolygonsToolEdgeActions_Triangles;
class UEditMeshPolygonsToolUVActions;
class UMeshOpPreviewWithBackgroundCompute;
class UPolyEditActivityContext;
class UPolyEditBevelEdgeActivity;
class UPolyEditCommonProperties;
class UPolyEditCutFacesActivity;
class UPolyEditExtrudeActivity;
class UPolyEditExtrudeEdgeActivity;
class UPolyEditInsertEdgeActivity;
class UPolyEditInsertEdgeLoopActivity;
class UPolyEditInsetOutsetActivity;
class UPolyEditPlanarProjectionUVActivity;
class UPolyEditTopologyProperties;
class UPolygonSelectionMechanic;
class UTransformProxy;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditMeshPolygonsTool : public USingleTargetWithSelectionTool, public IToolActivityHost, public IMeshVertexCommandChangeTarget, public IInteractiveToolNestedAcceptCancelAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditCommonProperties* CommonProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditMeshPolygonsToolActions* EditActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditMeshPolygonsToolActions_Triangles* EditActions_Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditMeshPolygonsToolEdgeActions* EditEdgeActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditMeshPolygonsToolEdgeActions_Triangles* EditEdgeActions_Triangles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditMeshPolygonsToolUVActions* EditUVActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditTopologyProperties* TopologyProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditExtrudeActivity* ExtrudeActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditInsetOutsetActivity* InsetOutsetActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditCutFacesActivity* CutFacesActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditPlanarProjectionUVActivity* PlanarProjectionUVActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditInsertEdgeActivity* InsertEdgeActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditInsertEdgeLoopActivity* InsertEdgeLoopActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditBevelEdgeActivity* BevelEdgeActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditExtrudeEdgeActivity* ExtrudeEdgeActivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditActivityContext* ActivityContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygonSelectionMechanic* SelectionMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombinedTransformGizmo* TransformGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* TransformProxy;
    
public:
    UEditMeshPolygonsTool();


    // Fix for true pure virtual functions not being implemented
};

