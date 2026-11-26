#pragma once
#include "CoreMinimal.h"
#include "IRRFXPreloadEntry.generated.h"

class UNiagaraSystem;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRFXPreloadEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> System;
    
    FIRRFXPreloadEntry();
};

