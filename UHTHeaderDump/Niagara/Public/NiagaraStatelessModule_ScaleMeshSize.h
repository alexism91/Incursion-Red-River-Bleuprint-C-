#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionVector3.h"
#include "NiagaraParameterBindingWithValue.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_ScaleMeshSize.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_ScaleMeshSize : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionVector3 ScaleDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBindingWithValue ScaleCurveRange;
    
    UNiagaraStatelessModule_ScaleMeshSize();

    UFUNCTION(BlueprintCallable)
    bool UseScaleCurveRange() const;
    
};

