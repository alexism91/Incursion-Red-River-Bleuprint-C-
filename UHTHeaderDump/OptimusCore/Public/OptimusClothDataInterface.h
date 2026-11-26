#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusClothDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusClothDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusClothDataInterface();

};

