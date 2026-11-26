#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "PatternTool.generated.h"

class UComponentBoundTransformProxy;
class UConstructionPlaneMechanic;
class UDragAlignmentMechanic;
class UInteractiveGizmo;
class UPatternToolSettings;
class UPatternTool_BoundingBoxSettings;
class UPatternTool_GridSettings;
class UPatternTool_LinearSettings;
class UPatternTool_OutputSettings;
class UPatternTool_RadialSettings;
class UPatternTool_RotationSettings;
class UPatternTool_ScaleSettings;
class UPatternTool_TranslationSettings;
class UPreviewGeometry;
class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPatternTool : public UMultiSelectionMeshEditingTool {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatternToolSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatternTool_BoundingBoxSettings* BoundingBoxSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatternTool_LinearSettings* LinearSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatternTool_GridSettings* GridSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatternTool_RadialSettings* RadialSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatternTool_RotationSettings* RotationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatternTool_TranslationSettings* TranslationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatternTool_ScaleSettings* ScaleSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPatternTool_OutputSettings* OutputSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UComponentBoundTransformProxy* PatternGizmoProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveGizmo* PatternGizmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* PatternGizmoComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConstructionPlaneMechanic* PlaneMechanic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UPrimitiveComponent*> AllComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPreviewGeometry* PreviewGeometry;
    
public:
    UPatternTool();

};

