#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "BasePlaneBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBasePlaneBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UBasePlaneBrushOpProps();

};

