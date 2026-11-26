#pragma once
#include "CoreMinimal.h"
#include "ActorAimData.h"
#include "EIRRAIAimStatus.h"
#include "EIRRAIShootStatus.h"
#include "IRRAIAimConfig.h"
#include "IRRAIAimData.h"
#include "IRRAIAimDelegateDelegate.h"
#include "IRRAIAimPersistentData.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAIShootDelegateDelegate.h"
#include "IRRAIWeaponData.h"
#include "IRRDamageData.h"
#include "IRRAIAimComponent.generated.h"

class AActor;
class UIRRAITarget;
class UIRRAIWeaponManager;
class UIRRAIWeaponSelector;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIAimComponent : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIAimDelegate OnAimStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIShootDelegate OnShootStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIAimData AimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIAimPersistentData PersistentData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeaponsFree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIAimConfig AimConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAimTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FActorAimData> TargetAimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAITarget* AimTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIWeaponManager* WeaponManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIWeaponSelector* WeaponSelector;
    
public:
    UIRRAIAimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartAimingService();
    
    UFUNCTION(BlueprintCallable)
    bool StartAiming();
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponsFree(bool bValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnShotFired(const FIRRAIWeaponData& NewWeaponData);
    
    UFUNCTION(BlueprintCallable)
    void OnAimTargetKilled(UIRRAITarget* Target, const FIRRDamageData& DamageData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeaponsFree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSimpleAimActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRAIShootStatus GetShootStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRAIAimStatus GetAimStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void AbortAiming();
    
};

