#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingToolBuilder -FallbackName=SingleSelectionMeshEditingToolBuilder
#include "SimpleCollisionEditorToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USimpleCollisionEditorToolBuilder : public USingleSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    USimpleCollisionEditorToolBuilder();

};

