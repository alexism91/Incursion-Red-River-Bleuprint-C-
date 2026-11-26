#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGNormalToDensityProvider.generated.h"

UCLASS(Blueprintable)
class UPCGNormalToDensityProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPCGNormalToDensityProvider();

};

