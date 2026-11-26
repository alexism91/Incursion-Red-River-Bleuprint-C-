#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "BakeMeshAttributeMapsToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeMeshAttributeMapsToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UBakeMeshAttributeMapsToolBuilder();

};

