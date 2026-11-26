#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolWithToolTargetsBuilder -FallbackName=InteractiveToolWithToolTargetsBuilder
#include "SingleSelectionMeshEditingToolBuilder.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class USingleSelectionMeshEditingToolBuilder : public UInteractiveToolWithToolTargetsBuilder {
    GENERATED_BODY()
public:
    USingleSelectionMeshEditingToolBuilder();

};

