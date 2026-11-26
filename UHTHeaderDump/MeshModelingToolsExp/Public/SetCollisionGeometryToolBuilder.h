#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "SetCollisionGeometryToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USetCollisionGeometryToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    USetCollisionGeometryToolBuilder();

};

