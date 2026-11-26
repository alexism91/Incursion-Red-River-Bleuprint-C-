#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionToolBuilder -FallbackName=SingleTargetWithSelectionToolBuilder
#include "ExtrudeMeshSelectionToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UExtrudeMeshSelectionToolBuilder : public USingleTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    UExtrudeMeshSelectionToolBuilder();

};

