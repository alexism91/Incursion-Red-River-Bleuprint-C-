#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "EditPivotToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditPivotToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UEditPivotToolBuilder();

};

