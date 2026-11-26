#pragma once
#include "CoreMinimal.h"
#include "LandscapeEditLayerPersistent.h"
#include "LandscapeEditLayer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ULandscapeEditLayer : public ULandscapeEditLayerPersistent {
    GENERATED_BODY()
public:
    ULandscapeEditLayer();

};

