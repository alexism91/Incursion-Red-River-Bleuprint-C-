#pragma once
#include "CoreMinimal.h"
#include "LensDistortionModelHandlerBase.h"
#include "AnamorphicLensDistortionModelHandler.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAnamorphicLensDistortionModelHandler : public ULensDistortionModelHandlerBase {
    GENERATED_BODY()
public:
    UAnamorphicLensDistortionModelHandler();

};

