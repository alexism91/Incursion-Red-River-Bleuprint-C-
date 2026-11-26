#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
#include "MeshSculptToolBase.h"
#include "MeshVertexPaintTool.generated.h"

class AInternalToolFrameworkActor;
class UDynamicMeshComponent;
class UMeshElementsVisualizer;
class UMeshVertexPaintToolQuickActions;
class UMeshVertexPaintToolUtilityActions;
class UPolyLassoMarqueeMechanic;
class UPolygroupLayersProperties;
class UVertexColorPaintBrushOpProps;
class UVertexPaintBasicProperties;
class UVertexPaintBrushFilterProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshVertexPaintTool : public UMeshSculptToolBase, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexPaintBasicProperties* BasicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexPaintBrushFilterProperties* FilterProperties;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexColorPaintBrushOpProps* PaintBrushOpProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVertexColorPaintBrushOpProps* EraseBrushOpProperties;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshVertexPaintToolQuickActions* QuickActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshVertexPaintToolUtilityActions* UtilityActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyLassoMarqueeMechanic* PolyLassoMechanic;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AInternalToolFrameworkActor* PreviewMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMeshComponent* DynamicMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshElementsVisualizer* MeshElementsDisplay;
    
public:
    UMeshVertexPaintTool();


    // Fix for true pure virtual functions not being implemented
};

