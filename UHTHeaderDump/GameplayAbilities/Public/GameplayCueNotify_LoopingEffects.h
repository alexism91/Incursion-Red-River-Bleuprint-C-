#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_CameraLensEffectInfo.h"
#include "GameplayCueNotify_CameraShakeInfo.h"
#include "GameplayCueNotify_ForceFeedbackInfo.h"
#include "GameplayCueNotify_InputDevicePropertyInfo.h"
#include "GameplayCueNotify_ParticleInfo.h"
#include "GameplayCueNotify_SoundInfo.h"
#include "GameplayCueNotify_LoopingEffects.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueNotify_LoopingEffects {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_ParticleInfo> LoopingParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_SoundInfo> LoopingSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_CameraShakeInfo LoopingCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_CameraLensEffectInfo LoopingCameraLensEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_ForceFeedbackInfo LoopingForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_InputDevicePropertyInfo LoopingInputDevicePropertyEffect;
    
public:
    GAMEPLAYABILITIES_API FGameplayCueNotify_LoopingEffects();
};

