#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntime -FallbackName=NNERuntime
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeCPU -FallbackName=NNERuntimeCPU
#include "NNERuntimeORTCpu.generated.h"

UCLASS(Blueprintable)
class UNNERuntimeORTCpu : public UObject, public INNERuntime, public INNERuntimeCPU {
    GENERATED_BODY()
public:
    UNNERuntimeORTCpu();


    // Fix for true pure virtual functions not being implemented
};

