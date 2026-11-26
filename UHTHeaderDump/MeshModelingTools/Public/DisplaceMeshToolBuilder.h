#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionToolBuilder -FallbackName=SingleTargetWithSelectionToolBuilder
#include "DisplaceMeshToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDisplaceMeshToolBuilder : public USingleTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    UDisplaceMeshToolBuilder();

};

