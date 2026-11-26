#pragma once
#include "CoreMinimal.h"
#include "LensDistortionModelHandlerBase.h"
#include "SphericalLensDistortionModelHandler.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USphericalLensDistortionModelHandler : public ULensDistortionModelHandlerBase {
    GENERATED_BODY()
public:
    USphericalLensDistortionModelHandler();

};

