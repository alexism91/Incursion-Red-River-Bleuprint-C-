#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NNE -ObjectName=NNERuntimeRDG -FallbackName=NNERuntimeRDG
#include "NNERuntimeORTDmlProxy.h"
#include "NNERuntimeORTDml_RDG.generated.h"

UCLASS(Blueprintable)
class UNNERuntimeORTDml_RDG : public UNNERuntimeORTDmlProxy, public INNERuntimeRDG {
    GENERATED_BODY()
public:
    UNNERuntimeORTDml_RDG();


    // Fix for true pure virtual functions not being implemented
};

