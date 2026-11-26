#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeNPU -FallbackName=NNERuntimeNPU
#include "NNERuntimeORTDmlProxy.h"
#include "NNERuntimeORTDml_NPU.generated.h"

UCLASS(Blueprintable)
class UNNERuntimeORTDml_NPU : public UNNERuntimeORTDmlProxy, public INNERuntimeNPU {
    GENERATED_BODY()
public:
    UNNERuntimeORTDml_NPU();


    // Fix for true pure virtual functions not being implemented
};

