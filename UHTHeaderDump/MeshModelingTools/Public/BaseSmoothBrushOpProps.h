#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "BaseSmoothBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseSmoothBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UBaseSmoothBrushOpProps();

};

