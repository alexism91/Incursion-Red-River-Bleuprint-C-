#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGInstanceDataProvider.generated.h"

UCLASS(Blueprintable)
class UPCGInstanceDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPCGInstanceDataProvider();

};

