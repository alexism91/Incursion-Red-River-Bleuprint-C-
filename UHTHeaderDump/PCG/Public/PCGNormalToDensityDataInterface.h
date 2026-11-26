#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataInterface.h"
#include "PCGNormalToDensityDataInterface.generated.h"

UCLASS(Blueprintable)
class UPCGNormalToDensityDataInterface : public UPCGComputeDataInterface {
    GENERATED_BODY()
public:
    UPCGNormalToDensityDataInterface();

};

