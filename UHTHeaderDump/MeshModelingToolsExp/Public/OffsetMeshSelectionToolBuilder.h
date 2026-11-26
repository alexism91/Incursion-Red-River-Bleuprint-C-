#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionToolBuilder -FallbackName=SingleTargetWithSelectionToolBuilder
#include "OffsetMeshSelectionToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UOffsetMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    UOffsetMeshSelectionToolBuilder();

};

