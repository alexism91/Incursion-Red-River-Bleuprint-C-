#pragma once
#include "CoreMinimal.h"
#include "MultiSelectionMeshEditingToolBuilder.h"
#include "BaseCreateFromSelectedToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseCreateFromSelectedToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UBaseCreateFromSelectedToolBuilder();

};

