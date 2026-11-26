#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=EAkCallbackType -FallbackName=EAkCallbackType
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRRadioMessage.h"
#include "IRRRadioMessageRequest.h"
#include "IRRRadioComponent.generated.h"

class UAkCallbackInfo;
class UIRRRadioDataAsset;
class UIRRRadioManager;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRRADIOSYSTEM_API UIRRRadioComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRRadioDataAsset*> RadioDataAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalRadioGateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWaitForResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadioCullDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCullToCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalRadioGateOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RadioMessageTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRRadioDataAsset* RadioDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRRadioManager* RadioManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRRadioMessageRequest DelayedMessageRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle CooldownTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DelayTimerHandle;
    
public:
    UIRRRadioComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TriggerRadioMessage(FGameplayTag NewRadioMessageTag, float ChanceToPlay, bool bForceToPlay, bool bIgnoreGate, float Delay, int32 Priority);
    
protected:
    UFUNCTION(BlueprintCallable)
    void TriggerDelayedRadioMessage();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayRadioMessage(FIRRRadioMessage RadioMessage, bool bOwner);
    
    UFUNCTION(BlueprintCallable)
    void OnReceiverEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerDeath(const FGameplayTag& DeathVoiceTag);
    
    UFUNCTION(BlueprintCallable)
    void OnCooldownTimer();
    
    UFUNCTION(BlueprintCallable)
    void OnBroadcasterEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
};

