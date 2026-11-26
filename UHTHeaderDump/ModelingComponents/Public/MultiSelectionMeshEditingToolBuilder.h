#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolWithToolTargetsBuilder -FallbackName=InteractiveToolWithToolTargetsBuilder
#include "MultiSelectionMeshEditingToolBuilder.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class UMultiSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder {
    GENERATED_BODY()
public:
    UMultiSelectionMeshEditingToolBuilder();

};

