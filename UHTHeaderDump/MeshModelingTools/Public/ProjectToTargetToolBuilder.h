#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "ProjectToTargetToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UProjectToTargetToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UProjectToTargetToolBuilder();

};

