#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolManageGeometrySelectionAPI -FallbackName=InteractiveToolManageGeometrySelectionAPI
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingTool -FallbackName=MultiSelectionMeshEditingTool
#include "TransformMeshesTarget.h"
#include "TransformMeshesTool.generated.h"

class UDragAlignmentMechanic;
class UTransformMeshesToolProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UTransformMeshesTool : public UMultiSelectionMeshEditingTool, public IInteractiveToolManageGeometrySelectionAPI {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformMeshesToolProperties* TransformProps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransformMeshesTarget> ActiveGizmos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDragAlignmentMechanic* DragAlignmentMechanic;
    
public:
    UTransformMeshesTool();


    // Fix for true pure virtual functions not being implemented
};

