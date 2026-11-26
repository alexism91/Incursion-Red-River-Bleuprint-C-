#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "UVLayoutToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UUVLayoutToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UUVLayoutToolBuilder();

};

