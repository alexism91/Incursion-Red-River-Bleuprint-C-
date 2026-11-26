#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "CharacterMontageSet.h"
#include "SimpleGameplayAbility.h"
#include "SimpleGameplayAbility_ThrowGrenade.generated.h"

class UAsyncAction_PlayMontage;
class UGrenadeComponent;

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_ThrowGrenade : public USimpleGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThrowSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnAimSection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ThrowNotifyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ThrowActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReturnToPreviousSlot;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet ThrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncAction_PlayMontage* StageMontage;
    
public:
    USimpleGameplayAbility_ThrowGrenade();

private:
    UFUNCTION(BlueprintCallable)
    void OnThrowNotify(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnThrowInterrupted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnThrowCompleted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnAimInterrupted(FName NotifyName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReleasedGrenade() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGrenadeComponent* FindHeldGrenade() const;
    
};

