#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "PhysicsInspectorToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPhysicsInspectorToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UPhysicsInspectorToolBuilder();

};

