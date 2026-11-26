#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeGPU -FallbackName=NNERuntimeGPU
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeRDG -FallbackName=NNERuntimeRDG
#include "NNERuntimeORTDmlProxy.h"
#include "NNERuntimeORTDml_GPU_RDG.generated.h"

UCLASS(Blueprintable)
class UNNERuntimeORTDml_GPU_RDG : public UNNERuntimeORTDmlProxy, public INNERuntimeGPU, public INNERuntimeRDG {
    GENERATED_BODY()
public:
    UNNERuntimeORTDml_GPU_RDG();


    // Fix for true pure virtual functions not being implemented
};

