#pragma once
#include "CoreMinimal.h"
#include "SingleTargetWithSelectionToolBuilder.h"
#include "BaseMeshProcessingToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseMeshProcessingToolBuilder : public USingleTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    UBaseMeshProcessingToolBuilder();

};

