#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingToolBuilder -FallbackName=SingleSelectionMeshEditingToolBuilder
#include "ExtractCollisionGeometryToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UExtractCollisionGeometryToolBuilder : public USingleSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UExtractCollisionGeometryToolBuilder();

};

