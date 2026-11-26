#pragma once
#include "CoreMinimal.h"
#include "FlashbangHitEvaluation.h"
#include "SimpleGameplayEffect.h"
#include "SimpleGameplayEffect_Blinded.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API USimpleGameplayEffect_Blinded : public USimpleGameplayEffect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFlashbangHitEvaluation HitEvaluation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AudioIntensityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MontageIntensityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AfterimageCaptureSize;
    
    USimpleGameplayEffect_Blinded();

};

