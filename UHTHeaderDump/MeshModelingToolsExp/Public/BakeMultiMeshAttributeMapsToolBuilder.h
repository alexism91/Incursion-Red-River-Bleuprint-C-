#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "BakeMultiMeshAttributeMapsToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMultiMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UBakeMultiMeshAttributeMapsToolBuilder();

};

