#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingToolBuilder -FallbackName=SingleSelectionMeshEditingToolBuilder
#include "RecomputeUVsToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URecomputeUVsToolBuilder : public USingleSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    URecomputeUVsToolBuilder();

};

