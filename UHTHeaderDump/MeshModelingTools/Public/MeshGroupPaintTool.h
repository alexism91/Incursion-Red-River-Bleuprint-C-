#pragma once
#include "CoreMinimal.h"
#include "MeshSculptToolBase.h"
#include "MeshGroupPaintTool.generated.h"

class AInternalToolFrameworkActor;
class UDynamicMeshComponent;
class UGroupEraseBrushOpProps;
class UGroupPaintBrushFilterProperties;
class UGroupPaintBrushOpProps;
class UMeshElementsVisualizer;
class UMeshGroupPaintToolFreezeActions;
class UPolyLassoMarqueeMechanic;
class UPolygroupLayersProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshGroupPaintTool : public UMeshSculptToolBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygroupLayersProperties* PolygroupLayerProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroupPaintBrushFilterProperties* FilterProperties;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroupPaintBrushOpProps* PaintBrushOpProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroupEraseBrushOpProps* EraseBrushOpProperties;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshGroupPaintToolFreezeActions* FreezeActions;
    
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
    UMeshGroupPaintTool();

};

