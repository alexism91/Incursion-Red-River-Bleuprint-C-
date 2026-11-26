#pragma once
#include "CoreMinimal.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAIShootSignatureDelegate.h"
#include "IRRAIWeaponAmmoData.h"
#include "IRRAIWeaponData.h"
#include "IRRAIWeaponSignatureDelegate.h"
#include "IRRAIWeaponManager.generated.h"

class UEquippableComponent;
class UWeaponComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIWeaponManager : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIShootSignature OnShotFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIWeaponSignature OnWeaponChanged;
    
    UIRRAIWeaponManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnEquipmentChanged(UEquippableComponent* NewEquippable);
    
    UFUNCTION(BlueprintCallable)
    void OnBotStopFiringWeapon();
    
    UFUNCTION(BlueprintCallable)
    void OnBotShotWeapon();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmoToShoot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAmmoOverRatio(float MagRatio, int32 MinBulletCount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponComponent* GetWeapon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAIWeaponData GetCurrentWeaponData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAIWeaponAmmoData GetCurrentAmmoData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmmoRatio() const;
    
};

