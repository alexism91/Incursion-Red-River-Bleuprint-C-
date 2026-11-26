#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshActor -FallbackName=SkeletalMeshActor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "AbilitiesInterface.h"
#include "ItemAnimInterface.h"
#include "QUA_LocalSight.h"
#include "QUA_MuzzleSettings.h"
#include "QUA_StatItem.h"
#include "QUA_WeaponActions.h"
#include "WeaponAttachmentInterface.h"
#include "QUA_Weapon.generated.h"

class AActor;
class UWeaponLegacyDataRenamedAsset;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AQUA_Weapon : public ASkeletalMeshActor, public IAbilitiesInterface, public IItemAnimInterface, public IWeaponAttachmentInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWeaponLegacyDataRenamedAsset* WeaponData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> InstalledAttachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WeaponStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_WeaponActions WeaponActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQUA_LocalSight> InstalledSights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_LocalSight PointSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isPointSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayedShotCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AIFireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQUA_StatItem> CurrentWeaponStats;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_MuzzleSettings MuzzleSettings;
    
public:
    AQUA_Weapon(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateWeaponStatsByDurability(FVector2D NewDurability);
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateMuzzleDistance();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateGameplayTags(const FGameplayTagContainer ToAddAbilities, const FGameplayTagContainer ToRemoveAbilities);
    
    UFUNCTION(BlueprintCallable)
    void TriggerPointSight();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartDeliberateMissTime(float DeliberateMissTime, float DeliberateMissAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponStats(TArray<FQUA_StatItem> NewStats);
    
    UFUNCTION(BlueprintCallable)
    FQUA_LocalSight RequestCurrentSight();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReplicateWeaponStates(FGameplayTagContainer NewWeaponStates);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponUnequipped_Notify();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponUnequipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponEquipped_Notify();
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponEquipped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowMagCapacity_Notify(bool Show);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShellEjection_Notify();
    
    UFUNCTION(BlueprintCallable)
    void OnShellEjection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRecoilMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccuracyMultiplier();
    
    UFUNCTION(BlueprintCallable)
    FQUA_LocalSight CycleSights();
    
    UFUNCTION(BlueprintCallable)
    void CalculateSights(TArray<AActor*> SightRefs, AActor* OwningPlayer);
    
    UFUNCTION(BlueprintCallable)
    FTransform CalculatedGripTransform(AActor* GripRef, AActor* OwningPlayer);
    

    // Fix for true pure virtual functions not being implemented
};

