#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "FirstPersonWeaponSubObject.h"
#include "OnWeaponFireModeChangedDelegate.h"
#include "OnWeaponShowMagCapacityDelegate.h"
#include "FirstPersonWeaponUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonWeaponUI : public UFirstPersonWeaponSubObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponFireModeChanged OnWeaponFireModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeaponShowMagCapacity OnWeaponShowMagCapacity;
    
    UFirstPersonWeaponUI();

    UFUNCTION(BlueprintCallable)
    void Event_OnWeaponShowMagCapacity(bool Trigger, int32 MagCapacity, int32 MaxMagCapacity);
    
    UFUNCTION(BlueprintCallable)
    void Event_OnWeaponFireModeChanged(FGameplayTag NewFireMode);
    
};

