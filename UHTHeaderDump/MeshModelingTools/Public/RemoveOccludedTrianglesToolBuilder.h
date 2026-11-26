#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "RemoveOccludedTrianglesToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URemoveOccludedTrianglesToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    URemoveOccludedTrianglesToolBuilder();

};

