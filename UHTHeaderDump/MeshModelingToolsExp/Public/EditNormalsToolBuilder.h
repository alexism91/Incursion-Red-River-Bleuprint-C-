#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "EditNormalsToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditNormalsToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UEditNormalsToolBuilder();

};

