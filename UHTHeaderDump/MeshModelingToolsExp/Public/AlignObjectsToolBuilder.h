#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "AlignObjectsToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UAlignObjectsToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UAlignObjectsToolBuilder();

};

