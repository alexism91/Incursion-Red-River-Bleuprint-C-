#pragma once
#include "CoreMinimal.h"
#include "EditMeshPolygonsToolActionPropertySet.h"
#include "EditMeshPolygonsToolUVActions.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEditMeshPolygonsToolUVActions : public UEditMeshPolygonsToolActionPropertySet {
    GENERATED_BODY()
public:
    UEditMeshPolygonsToolUVActions();

    UFUNCTION(BlueprintCallable)
    void PlanarProjection();
    
};

