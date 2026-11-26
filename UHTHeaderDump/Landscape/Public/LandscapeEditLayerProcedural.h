#pragma once
#include "CoreMinimal.h"
#include "LandscapeEditLayerBase.h"
#include "LandscapeEditLayerProcedural.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class ULandscapeEditLayerProcedural : public ULandscapeEditLayerBase {
    GENERATED_BODY()
public:
    ULandscapeEditLayerProcedural();

};

