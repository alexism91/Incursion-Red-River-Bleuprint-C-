#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeGPU -FallbackName=NNERuntimeGPU
#include "NNERuntimeORTDmlProxy.h"
#include "NNERuntimeORTDml_GPU.generated.h"

UCLASS(Blueprintable)
class UNNERuntimeORTDml_GPU : public UNNERuntimeORTDmlProxy, public INNERuntimeGPU {
    GENERATED_BODY()
public:
    UNNERuntimeORTDml_GPU();


    // Fix for true pure virtual functions not being implemented
};

