#pragma once
#include "CoreMinimal.h"
#include "SimpleGameplayAbility.h"
#include "SimpleGameplayAbility_WeaponMontage.generated.h"

class UAsyncAction_PlayMontage;

UCLASS(Abstract, Blueprintable)
class TEST_C_API USimpleGameplayAbility_WeaponMontage : public USimpleGameplayAbility {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncAction_PlayMontage* WeaponMontage;
    
public:
    USimpleGameplayAbility_WeaponMontage();

private:
    UFUNCTION(BlueprintCallable)
    void OnWeaponMontageInterrupted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponMontageBlendOut(FName NotifyName);
    
};

