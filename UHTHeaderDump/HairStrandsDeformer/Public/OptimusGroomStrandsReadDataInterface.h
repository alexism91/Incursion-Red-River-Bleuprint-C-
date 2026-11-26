#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OptimusCore -ObjectName=OptimusComputeDataInterface -FallbackName=OptimusComputeDataInterface
#include "OptimusGroomStrandsReadDataInterface.generated.h"

UCLASS(Blueprintable)
class UOptimusGroomStrandsReadDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusGroomStrandsReadDataInterface();

};

