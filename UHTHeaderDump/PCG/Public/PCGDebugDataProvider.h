#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGDebugDataProvider.generated.h"

UCLASS(Blueprintable)
class UPCGDebugDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPCGDebugDataProvider();

};

