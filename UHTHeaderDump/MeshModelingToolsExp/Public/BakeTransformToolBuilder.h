#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "BakeTransformToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBakeTransformToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UBakeTransformToolBuilder();

};

