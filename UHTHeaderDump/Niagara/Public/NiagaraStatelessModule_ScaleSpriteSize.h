#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionVector2.h"
#include "NiagaraParameterBindingWithValue.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_ScaleSpriteSize.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_ScaleSpriteSize : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionVector2 ScaleDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue ScaleCurveRange;
    
    UNiagaraStatelessModule_ScaleSpriteSize();

    UFUNCTION(BlueprintCallable)
    bool UseScaleCurveRange() const;
    
};

