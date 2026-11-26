#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ReloadData.h"
#include "SimpleGameplayAbility_Toggleable.h"
#include "SimpleGameplayAbility_Reload.generated.h"

class AActor;
class UAsyncAction_PlayMontage;
class UWeaponComponent;
class UWeaponDataAsset;

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_Reload : public USimpleGameplayAbility_Toggleable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NoMagFollowUpAbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReloadData ReloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmergencyReload;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAsyncAction_PlayMontage* ReloadMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* EquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UWeaponComponent* WeaponComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWeaponDataAsset* WeaponData;
    
public:
    USimpleGameplayAbility_Reload();

private:
    UFUNCTION(BlueprintCallable)
    void OnReloadMontageInterrupted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnReloadMontageCompleted(FName NotifyName);
    
    UFUNCTION(BlueprintCallable)
    void OnReloadMontageBlendOut(FName NotifyName);
    
};

