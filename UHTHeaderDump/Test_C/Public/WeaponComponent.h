#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=EasyBallistics -ObjectName=EFireMode -FallbackName=EFireMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AmmunitionState.h"
#include "BulletData.h"
#include "ContainerItem.h"
#include "EquippableComponent.h"
#include "IRRTacticalAttachmentOption.h"
#include "ReloadData.h"
#include "SightData.h"
#include "Templates/SubclassOf.h"
#include "WeaponAudioSettings.h"
#include "WeaponComponent.generated.h"

class AAIManager;
class AActor;
class AEBBullet;
class UAkRtpc;
class UCurveFloat;
class UDamageType;
class UForegripComponent;
class UIRRItemDefinition;
class UMuzzleComponent;
class UParticleSystem;
class UPistolGripComponent;
class USightComponent;
class UTacticalComponent;
class UWeaponDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UWeaponComponent : public UEquippableComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStopFiringWeapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStartFiringWeapon);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnShowMagCapacity, bool, bShow, int32, MagCapacity, int32, MaxMagCapacity);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShotFired);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHeatingValue, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFireModeSwitched, FGameplayTag, NewFireMode);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBulletVisibilityUpdated, bool, IsVisible, FContainerItem, BulletItem);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RateOfFireRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* TailPitchRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* TailVolumeRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuppressionCheckDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetShotCountDelay_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetShotCountDelay_AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MuzzleFlashProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstShotCountMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequestAmmunitionStateTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEBBullet> BulletClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> BulletDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* BulletCasing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bManualChamber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualChamberDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenChamber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ShotFiredNoiseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAISettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDeliberateMissShotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinDeliberateMissTimeResetDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FLengthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FRecoilMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FDurabilityMalfunctionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugMalfunction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DegradationRate_SemiMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DegradationRate_AutoMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MisfireChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FHeatingMalfunctionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FHeatingDurabilityCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIManager* AIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBulletData Bullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USightComponent*> Sights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UTacticalComponent*> TacticalAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UForegripComponent* Foregrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPistolGripComponent* PistolGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMuzzleComponent* Muzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Mag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USightComponent*> LocSightComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USightComponent* LocPointSightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocSightIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPointSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LocTacticalIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRTacticalAttachmentOption> LocTacticalAttachmentOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFireTriggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Aim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmmunitionState AmmunitionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReloadData ReloadData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeatingValue;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHeatingValue OnHeatingValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FiringLoopActive, meta=(AllowPrivateAccess=true))
    bool bFiringLoopActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShotFired OnShotFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartFiringWeapon OnStartFiringWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopFiringWeapon OnStopFiringWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowMagCapacity OnShowMagCapacity;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFireModeSwitched OnFireModeSwitched;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBulletVisibilityUpdated OnBulletVisibilityUpdated;
    
    UWeaponComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateWeaponEssentials();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCurrentTacticalOption();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAmmunitionState();
    
    UFUNCTION(BlueprintCallable)
    bool TryIncrementTactical();
    
    UFUNCTION(BlueprintCallable)
    bool TryIncrementSight();
    
    UFUNCTION(BlueprintCallable)
    void TriggerFire();
    
    UFUNCTION(BlueprintCallable)
    void ToggleCurrentTacticalOption();
    
    UFUNCTION(BlueprintCallable)
    void ToggleAllTacticalAttachments(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SwitchFireMode(FGameplayTag OldFireModeTag, FGameplayTag NewFireModeTag);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopFiringWeapon_Server();
    
    UFUNCTION(BlueprintCallable)
    void StopFiringWeapon_Networked();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void StopFiringWeapon_MC();
    
    UFUNCTION(BlueprintCallable)
    void StopFiring();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StartFiringWeapon_Server();
    
    UFUNCTION(BlueprintCallable)
    void StartFiringWeapon_Networked();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void StartFiringWeapon_MC();
    
    UFUNCTION(BlueprintCallable)
    void StartFiring();
    
    UFUNCTION(BlueprintCallable)
    void SpawnEffects();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SpawnCosmeticBullet_MC(FVector_NetQuantize Origin, FVector_NetQuantizeNormal Direction, int32 SpeedMetersPerSecond);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SpawnBullet_Server(FVector LocLocation, FVector LocAim, UIRRItemDefinition* BulletData);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBullet_Networked(FVector LocAim, FVector LocLocation);
    
    UFUNCTION(BlueprintCallable)
    void SpawnBullet(FVector LocLocation, FVector LocAim, UIRRItemDefinition* BulletData);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void SingleFireWeapon_Server();
    
    UFUNCTION(BlueprintCallable)
    void SingleFireWeapon_Networked();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void SingleFireWeapon_MC();
    
    UFUNCTION(BlueprintCallable)
    void ShowMagCapacity(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetTriggerHeld(bool bHeld);
    
    UFUNCTION(BlueprintCallable)
    void ResetShotCount();
    
    UFUNCTION(BlueprintCallable)
    void RequestReloadData(FReloadData& OutReloadData, bool& bForceEmergencyReload);
    
    UFUNCTION(BlueprintCallable)
    void RemoteFireWeapon();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ReduceHeating();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PreFireCalculations();
    
    UFUNCTION(BlueprintCallable)
    void OpenSemiAutoGate();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FiringLoopActive();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnBulletImpact_Server(FTransform SpawnTransform, FHitResult HitResult, bool Penetrated, UCurveFloat* EffectiveRange, UIRRItemDefinition* BulletData);
    
    UFUNCTION(BlueprintCallable)
    void OnBulletImpact_Networked(FTransform SpawnTransform, FHitResult HitResult, bool Penetrated, UCurveFloat* EffectiveRange, UIRRItemDefinition* BulletData);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnBulletImpact_MC(FTransform SpawnTransform, FHitResult HitResult, bool Penetrated);
    
    UFUNCTION(BlueprintCallable)
    void LocalFireWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_SpawnBullet(FVector LocLocation, FVector LocAim);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnBulletImpact(FTransform SpawnTransform, FHitResult HitResult, bool Penetrated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_HandleMalfunction(const FGameplayTag& MalfunctionTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_EjectShell();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSuppressed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPointSightActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFullAuto() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsChamberEmpty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyTacticalDeviceOn() const;
    
    UFUNCTION(BlueprintCallable)
    void InsertBullet(bool bChambered);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void IncreaseHeating();
    
    UFUNCTION(BlueprintCallable)
    void HolsterMag();
    
    UFUNCTION(BlueprintCallable)
    bool HasMalfunction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool HasFireMode(const FGameplayTag& FireMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWeaponDataAsset* GetWeaponDataAsset();
    
    UFUNCTION(BlueprintCallable)
    FWeaponAudioSettings GetWeaponAudioSettings();
    
    UFUNCTION(BlueprintCallable)
    float GetSpread();
    
    UFUNCTION(BlueprintCallable)
    float GetRecoilMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetRecoil();
    
    UFUNCTION(BlueprintCallable)
    float GetLengthMultiplier();
    
    UFUNCTION(BlueprintCallable)
    float GetLength(bool Left, bool Right);
    
    UFUNCTION(BlueprintCallable)
    float GetFireRate();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetFirePortRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetFirePortLocation() const;
    
    UFUNCTION(BlueprintCallable)
    static EFireMode GetFireModeFromTagContainer(FGameplayTagContainer TagContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFireMode GetFireMode() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDurabilityPercentage();
    
    UFUNCTION(BlueprintCallable)
    FIRRTacticalAttachmentOption GetCurrentTacticalOption();
    
    UFUNCTION(BlueprintCallable)
    FSightData GetCurrentSightData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USightComponent* GetCurrentSightComponent() const;
    
    UFUNCTION(BlueprintCallable)
    void FixMalfunction();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteChamberWeapon();
    
    UFUNCTION(BlueprintCallable)
    void EjectShell();
    
    UFUNCTION(BlueprintCallable)
    void DropMag_HandleSeparateFOV(AActor* MagRef);
    
    UFUNCTION(BlueprintCallable)
    void DropMag();
    
    UFUNCTION(BlueprintCallable)
    void DrawMag();
    
    UFUNCTION(BlueprintCallable)
    void DrawBullet();
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag DetermineMalfunction();
    
    UFUNCTION(BlueprintCallable)
    bool CycleTacticalOption();
    
    UFUNCTION(BlueprintCallable)
    void CheckChamberWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAimWithCurrentSight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreOpticsBlocked() const;
    
};

