#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "CharacterMontageSet.h"
#include "ESimpleGameplayEffectDuration.h"
#include "ESimpleGameplayEffectStackingBehaviour.h"
#include "OnGameplayEffectCommitedDelegate.h"
#include "OnGameplayEffectFinishedDelegate.h"
#include "OnGameplayEffectUpdatedDelegate.h"
#include "SimpleGameplayEffect.generated.h"

class AActor;
class UAkAudioEvent;
class UGameplayAbilityComponent;
class USimpleGameplayEffect;
class UTexture2D;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API USimpleGameplayEffect : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleGameplayEffectDuration Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DurationMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EffectMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ConflictingGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GrantedGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockAbilitiesWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InterruptAbilitiesWithTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MaskingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESimpleGameplayEffectStackingBehaviour StackingBehaviour;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet EffectMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LinkedAnimGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool StopMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EffectAkStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EffectAkStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostAkEventsOnlyForPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayAbilityComponent* AbilityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle DurationTimerHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle TickTimerHandle;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayEffectCommited OnGameplayEffectCommited;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayEffectFinished OnGameplayEffectFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameplayEffectUpdated OnGameplayEffectUpdated;
    
    USimpleGameplayEffect();

    UFUNCTION(BlueprintCallable)
    void Tick();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPostAkEvents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldBeReplacedBy(USimpleGameplayEffect* NewEffect);
    
    UFUNCTION(BlueprintCallable)
    void Replace(USimpleGameplayEffect* NewEffect);
    
    UFUNCTION(BlueprintCallable)
    void ReInit();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMaskChanged(bool bMasked);
    
    UFUNCTION(BlueprintCallable)
    void NotifyUpdated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Tick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Replace(USimpleGameplayEffect* NewEffect);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ReInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_MaskChanged(bool bMasked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Finish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Activate();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsSameStackAs(USimpleGameplayEffect* Other);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMasked() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTagRemoved(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    void HandleTagAdded(const FGameplayTag& Tag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetEffectName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UTexture2D* GetEffectIcon() const;
    
    UFUNCTION(BlueprintCallable)
    void Finish();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartMontage();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartEffect(UGameplayAbilityComponent* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanStartAudio();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeReplaced(USimpleGameplayEffect* Effect);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivate();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

