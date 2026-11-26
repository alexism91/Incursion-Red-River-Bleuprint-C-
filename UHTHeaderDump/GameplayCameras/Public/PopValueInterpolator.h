#pragma once
#include "CoreMinimal.h"
#include "CameraValueInterpolator.h"
#include "PopValueInterpolator.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UPopValueInterpolator : public UCameraValueInterpolator {
    GENERATED_BODY()
public:
    UPopValueInterpolator();

};

