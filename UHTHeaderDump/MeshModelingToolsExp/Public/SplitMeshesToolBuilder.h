#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=MultiTargetWithSelectionToolBuilder -FallbackName=MultiTargetWithSelectionToolBuilder
#include "SplitMeshesToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USplitMeshesToolBuilder : public UMultiTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    USplitMeshesToolBuilder();

};

