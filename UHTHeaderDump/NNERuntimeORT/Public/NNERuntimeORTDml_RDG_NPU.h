#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeNPU -FallbackName=NNERuntimeNPU
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeRDG -FallbackName=NNERuntimeRDG
#include "NNERuntimeORTDmlProxy.h"
#include "NNERuntimeORTDml_RDG_NPU.generated.h"

UCLASS(Blueprintable)
class UNNERuntimeORTDml_RDG_NPU : public UNNERuntimeORTDmlProxy, public INNERuntimeRDG, public INNERuntimeNPU {
    GENERATED_BODY()
public:
    UNNERuntimeORTDml_RDG_NPU();


    // Fix for true pure virtual functions not being implemented
};

