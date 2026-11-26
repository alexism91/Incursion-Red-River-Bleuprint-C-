#pragma once
#include "CoreMinimal.h"
#include "LandscapeEditLayerBase.h"
#include "LandscapeEditLayerRenderer.h"
#include "LandscapeEditLayerPersistent.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ULandscapeEditLayerPersistent : public ULandscapeEditLayerBase, public ILandscapeEditLayerRenderer {
    GENERATED_BODY()
public:
    ULandscapeEditLayerPersistent();


    // Fix for true pure virtual functions not being implemented
};

