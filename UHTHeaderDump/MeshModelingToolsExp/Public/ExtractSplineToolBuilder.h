#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingToolBuilder -FallbackName=SingleSelectionMeshEditingToolBuilder
#include "ExtractSplineToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UExtractSplineToolBuilder : public USingleSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UExtractSplineToolBuilder();

};

