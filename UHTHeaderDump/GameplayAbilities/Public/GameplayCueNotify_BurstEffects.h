#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_CameraLensEffectInfo.h"
#include "GameplayCueNotify_CameraShakeInfo.h"
#include "GameplayCueNotify_DecalInfo.h"
#include "GameplayCueNotify_ForceFeedbackInfo.h"
#include "GameplayCueNotify_InputDevicePropertyInfo.h"
#include "GameplayCueNotify_ParticleInfo.h"
#include "GameplayCueNotify_SoundInfo.h"
#include "GameplayCueNotify_BurstEffects.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueNotify_BurstEffects {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_ParticleInfo> BurstParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayCueNotify_SoundInfo> BurstSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_CameraShakeInfo BurstCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_CameraLensEffectInfo BurstCameraLensEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_ForceFeedbackInfo BurstForceFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_InputDevicePropertyInfo BurstDevicePropertyEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayCueNotify_DecalInfo BurstDecal;
    
public:
    GAMEPLAYABILITIES_API FGameplayCueNotify_BurstEffects();
};

