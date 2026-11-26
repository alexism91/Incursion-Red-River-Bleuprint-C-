#pragma once
#include "CoreMinimal.h"
#include "ENSMSubUVAnimation_Mode.h"
#include "NiagaraDistributionRangeInt.h"
#include "NiagaraStatelessModule.h"
#include "NiagaraStatelessModule_SubUVAnimation.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UNiagaraStatelessModule_SubUVAnimation : public UNiagaraStatelessModule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraDistributionRangeInt FrameIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartFrameRangeOverride_Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEndFrameRangeOverride_Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartFrameRangeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EndFrameRangeOverride;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ENSMSubUVAnimation_Mode AnimationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LoopsPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RandomChangeInterval;
    
    UNiagaraStatelessModule_SubUVAnimation();

};

