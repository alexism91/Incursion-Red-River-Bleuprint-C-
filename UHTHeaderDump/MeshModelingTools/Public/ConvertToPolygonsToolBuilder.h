#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionToolBuilder -FallbackName=SingleTargetWithSelectionToolBuilder
#include "ConvertToPolygonsToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UConvertToPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    UConvertToPolygonsToolBuilder();

};

