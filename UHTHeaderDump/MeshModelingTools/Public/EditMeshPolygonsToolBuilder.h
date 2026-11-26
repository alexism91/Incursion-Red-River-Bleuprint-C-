#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleTargetWithSelectionToolBuilder -FallbackName=SingleTargetWithSelectionToolBuilder
#include "EditMeshPolygonsToolBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditMeshPolygonsToolBuilder : public USingleTargetWithSelectionToolBuilder {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolBuilder();

};

