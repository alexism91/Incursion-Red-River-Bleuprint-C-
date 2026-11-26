#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "EditPivotTarget.h"
#include "EditPivotTool.generated.h"

class UDragAlignmentMechanic;
class UEditPivotToolActionPropertySet;
class UEditPivotToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditPivotTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditPivotToolProperties* TransformProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditPivotToolActionPropertySet* EditPivotActions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEditPivotTarget> ActiveGizmos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
public:
    UEditPivotTool();


    // Fix for true pure virtual functions not being implemented
};

