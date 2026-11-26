#pragma once
#include "CoreMinimal.h"
#include "NiagaraDistributionPosition.h"
#include "NiagaraDistributionRangeColor.h"
#include "NiagaraDistributionRangeFloat.h"
#include "NiagaraDistributionRangeVector2.h"
#include "NiagaraDistributionRangeVector3.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_InitializeParticle.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_InitializeParticle : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat LifetimeDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeColor ColorDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat MassDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector2 SpriteSizeDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat SpriteRotationDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeVector3 MeshScaleDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWriteRibbonWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeFloat RibbonWidthDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionPosition InitialPositionDistribution;
    
    UNiagaraStatelessModule_InitializeParticle();

};

