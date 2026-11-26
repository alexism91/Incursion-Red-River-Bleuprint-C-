#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolWithToolTargetsBuilder -FallbackName=InteractiveToolWithToolTargetsBuilder
#include "MultiTargetWithSelectionToolBuilder.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, NonTransient)
class UMultiTargetWithSelectionToolBuilder : public UInteractiveToolWithToolTargetsBuilder {
    GENERATED_BODY()
public:
    UMultiTargetWithSelectionToolBuilder();

};

