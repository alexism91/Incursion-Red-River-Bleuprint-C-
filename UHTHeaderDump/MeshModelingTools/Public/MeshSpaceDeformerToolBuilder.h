#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingToolBuilder -FallbackName=SingleSelectionMeshEditingToolBuilder
#include "MeshSpaceDeformerToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSpaceDeformerToolBuilder : public USingleSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UMeshSpaceDeformerToolBuilder();

};

