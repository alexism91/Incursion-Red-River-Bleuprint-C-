#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingToolBuilder -FallbackName=SingleSelectionMeshEditingToolBuilder
#include "RevolveBoundaryToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URevolveBoundaryToolBuilder : public USingleSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    URevolveBoundaryToolBuilder();

};

