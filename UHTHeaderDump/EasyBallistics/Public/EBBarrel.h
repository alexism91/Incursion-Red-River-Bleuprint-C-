#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantizeNormal -FallbackName=Vector_NetQuantizeNormal
#include "EFireMode.h"
#include "Templates/SubclassOf.h"
#include "EBBarrel.generated.h"

class AActor;
class ACharacter;
class AEBBullet;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class EASYBALLISTICS_API UEBBarrel : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FShotFired);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FReadyToShoot);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FBeforeShotFired);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAmmoDepleted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DebugArrowSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InheritVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RecoilMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdditionalVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Spread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MuzzleVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireRateMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FireRateMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    EFireMode FireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ShootingBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GatlingAutoSpool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GatlingSpoolUpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GatlingSpoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GatlingPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CycleAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CycleAmmoUnlimited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AEBBullet>> Ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CycleAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CycleAmmoPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEBBullet> ChamberedBullet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Shooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Spooling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GatlingRPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LoadNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BurstRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlayerAimDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReplicateVariables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ReplicateShotFiredEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ClientSideAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientAimUpdateFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClientAimDistanceLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeliberateMissAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OnTargetAimCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimSkill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetBone;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBeforeShotFired BeforeShotFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShotFired ShotFired;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAmmoDepleted AmmoDepleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReadyToShoot ReadyToShoot;
    
    UEBBarrel(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void UnloadChambered(bool ManualCharge);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SwitchFireMode(EFireMode NewFireMode);
    
private:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ShotFiredMulticast();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ShootRepCSA(bool Trigger, FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ShootRep(bool Trigger);
    
public:
    UFUNCTION(BlueprintCallable)
    void Shoot(bool Trigger);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetAmmo(int32 Count, bool NewUnloadChambered, bool CancelShooting, bool ManualCharge, const TArray<TSubclassOf<AEBBullet>>& NewAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PredictHitFromLocation(bool& Hit, FVector& HitLocation, float& HitTime, AActor*& HitActor, TArray<FVector>& Trajectory, TSubclassOf<AEBBullet> BulletClass, FVector StartLocation, FVector AimDirection, TArray<AActor*> IgnoredActors, float MaxTime, float Step) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PredictHit(bool& Hit, FVector& HitLocation, float& HitTime, AActor*& HitActor, TArray<FVector>& Trajectory, TSubclassOf<AEBBullet> BulletClass, TArray<AActor*> IgnoredActors, float MaxTime, float Step) const;
    
    UFUNCTION(BlueprintCallable)
    void NextBullet();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitialBulletTransform(FVector InLocation, FVector InDirection, FVector& OutLocation, FVector& OutDirection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAmmoCount(bool CountChambered) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<AEBBullet>> GetAmmo(bool CountChambered) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void GatlingSpool(bool Spool);
    
    UFUNCTION(BlueprintCallable)
    void FireSingleBullet(ACharacter* Instigator, FVector Location, FVector Aim);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ClientAim(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Charge();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateAimDirectionFromLocation(TSubclassOf<AEBBullet> BulletClass, FVector StartLocation, FVector TargetLocation, FVector TargetVelocity, FVector& AimDirection, FVector& PredictedTargetLocation, FVector& PredictedIntersectionLocation, float& PredictedFlightTime, float& Error, float MaxTime, float Step, int32 NumIterations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void CalculateAimDirection(TSubclassOf<AEBBullet> BulletClass, FVector TargetLocation, FVector TargetVelocity, FVector& AimDirection, FVector& PredictedTargetLocation, FVector& PredictedIntersectionLocation, float& PredictedFlightTime, float& Error, float MaxTime, float Step, int32 NumIterations) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyRecoil(UPrimitiveComponent* Component, FVector InLocation, FVector Impulse);
    
};

