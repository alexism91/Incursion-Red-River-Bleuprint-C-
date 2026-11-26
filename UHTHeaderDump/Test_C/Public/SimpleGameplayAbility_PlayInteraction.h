#pragma once
#include "CoreMinimal.h"
#include "CharacterMontageSet.h"
#include "SimpleGameplayAbility.h"
#include "SimpleGameplayAbility_PlayInteraction.generated.h"

class UAsyncAction_PlayMontage;

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_PlayInteraction : public USimpleGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterMontageSet CharacterMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnEquipWeapon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncAction_PlayMontage* InteractionMontage;
    
public:
    USimpleGameplayAbility_PlayInteraction();

private:
    UFUNCTION(BlueprintCallable)
    void OnInteractionNotifyBegin(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionMontageInterrupted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionMontageEnded(FName NotifyName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteNotify(FName Name);
    
};

