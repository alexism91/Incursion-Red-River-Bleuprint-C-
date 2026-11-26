#pragma once
#include "CoreMinimal.h"
#include "LensModel.h"
#include "SphericalLensModel.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USphericalLensModel : public ULensModel {
    GENERATED_BODY()
public:
    USphericalLensModel();

};

