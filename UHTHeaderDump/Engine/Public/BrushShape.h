#pragma once
#include "CoreMinimal.h"
#include "Brush.h"
#include "BrushShape.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport)
class ABrushShape : public ABrush {
    GENERATED_BODY()
public:
    ABrushShape(const FObjectInitializer& ObjectInitializer);

};

