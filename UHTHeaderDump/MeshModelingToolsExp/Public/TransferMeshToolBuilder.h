#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiSelectionMeshEditingToolBuilder -FallbackName=MultiSelectionMeshEditingToolBuilder
#include "TransferMeshToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UTransferMeshToolBuilder : public UMultiSelectionMeshEditingToolBuilder {
    GENERATED_BODY()
public:
    UTransferMeshToolBuilder();

};

