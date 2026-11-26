#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolWithToolTargetsBuilder -FallbackName=InteractiveToolWithToolTargetsBuilder
#include "SingleTargetWithSelectionToolBuilder.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class USingleTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder {
    GENERATED_BODY()
public:
    USingleTargetWithSelectionToolBuilder();

};

