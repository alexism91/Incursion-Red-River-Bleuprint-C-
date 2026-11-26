#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeGPU -FallbackName=NNERuntimeGPU
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeNPU -FallbackName=NNERuntimeNPU
#include "NNERuntimeORTDmlProxy.h"
#include "NNERuntimeORTDml_GPU_NPU.generated.h"

UCLASS(Blueprintable)
class UNNERuntimeORTDml_GPU_NPU : public UNNERuntimeORTDmlProxy, public INNERuntimeGPU, public INNERuntimeNPU {
    GENERATED_BODY()
public:
    UNNERuntimeORTDml_GPU_NPU();


    // Fix for true pure virtual functions not being implemented
};

