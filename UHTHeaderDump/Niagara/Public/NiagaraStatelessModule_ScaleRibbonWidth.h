#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionFloat.h"
#include "NiagaraParameterBindingWithValue.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_ScaleRibbonWidth.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_ScaleRibbonWidth : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionFloat ScaleDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue ScaleCurveRange;
    
    UNiagaraStatelessModule_ScaleRibbonWidth();

    UFUNCTION(BlueprintCallable)
    bool UseScaleCurveRange() const;
    
};

