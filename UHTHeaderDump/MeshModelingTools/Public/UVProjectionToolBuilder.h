#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionToolBuilder -FallbackName=SingleTargetWithSelectionToolBuilder
#include "UVProjectionToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UUVProjectionToolBuilder : public USingleTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    UUVProjectionToolBuilder();

};

