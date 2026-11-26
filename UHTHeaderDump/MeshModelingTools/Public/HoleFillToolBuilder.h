#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingToolBuilder -FallbackName=SingleSelectionMeshEditingToolBuilder
#include "HoleFillToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UHoleFillToolBuilder : public USingleSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UHoleFillToolBuilder();

};

