#pragma once
#include "CoreMinimal.h"
#include "GameplayCueNotify_SpawnResult.generated.h"

class APlayerController;
class ICameraLensEffectInterface;
class UCameraLensEffectInterface;
class UAudioComponent;
class UCameraShakeBase;
class UDecalComponent;
class UFXSystemComponent;
class UForceFeedbackComponent;

USTRUCT(BlueprintType)
struct FGameplayCueNotify_SpawnResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFXSystemComponent*> FxSystemComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAudioComponent*> AudioComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UCameraShakeBase*> CameraShakes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TScriptInterface<ICameraLensEffectInterface>> CameraLensEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UForceFeedbackComponent* ForceFeedbackComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerController* ForceFeedbackTargetPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UDecalComponent* DecalComponent;
    
    GAMEPLAYABILITIES_API FGameplayCueNotify_SpawnResult();
};

