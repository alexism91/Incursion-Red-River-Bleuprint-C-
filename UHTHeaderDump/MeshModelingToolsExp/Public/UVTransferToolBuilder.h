#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiTargetWithSelectionToolBuilder -FallbackName=MultiTargetWithSelectionToolBuilder
#include "UVTransferToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UUVTransferToolBuilder : public UMultiTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    UUVTransferToolBuilder();

};

