#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EIRRWeaponSlot.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAILoadoutSignatureDelegate.h"
#include "IRRAIWeaponData.h"
#include "IRRAIWeaponLoadout.h"
#include "IRRAIWeaponSelector.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIWeaponSelector : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAILoadoutSignature OnLoadoutUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PrimarySlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag SecondarySlotTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PistolSlotTag;
    
public:
    UIRRAIWeaponSelector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool SwapToSlot(EIRRWeaponSlot Slot, bool bEnsureChambered);
    
    UFUNCTION(BlueprintCallable)
    bool SwapToBestAvailable(bool bEnsureChambered, bool bKeepCurrentIfArmed);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponChanged(const FIRRAIWeaponData& WeaponData);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnAbilityEnded(FGameplayTag AbilityTag, bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwapping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSlotDrawn(EIRRWeaponSlot Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLoadedWeaponAvailable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAnyCombatWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAIWeaponLoadout GetWeaponLoadout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetSlotTag(EIRRWeaponSlot Slot) const;
    
    UFUNCTION(BlueprintCallable)
    void EnsureChambered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSwapToSlot(EIRRWeaponSlot Slot) const;
    
};

