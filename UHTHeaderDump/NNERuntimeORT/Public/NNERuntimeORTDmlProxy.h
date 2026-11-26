#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntime -FallbackName=NNERuntime
#include "NNERuntimeORTDmlProxy.generated.h"

UCLASS(Blueprintable)
class UNNERuntimeORTDmlProxy : public UObject, public INNERuntime {
    GENERATED_BODY()
public:
    UNNERuntimeORTDmlProxy();


    // Fix for true pure virtual functions not being implemented
};

