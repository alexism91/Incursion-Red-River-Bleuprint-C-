#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiTargetWithSelectionToolBuilder -FallbackName=MultiTargetWithSelectionToolBuilder
#include "LatticeDeformerToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class ULatticeDeformerToolBuilder : public UMultiTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    ULatticeDeformerToolBuilder();

};

