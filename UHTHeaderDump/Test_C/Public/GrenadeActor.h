#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "IRRGrenadePredictionConfig.h"
#include "GrenadeActor.generated.h"

class UAkAudioEvent;
class UAkComponent;
class UAkRtpc;
class UIRRGrenadePredictionComponent;
class UIRRItemDefinition;
class UProjectileMovementComponent;
class USphereComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class TEST_C_API AGrenadeActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    UIRRItemDefinition* GrenadeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideGrenadeMeshOnDetonate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopGrenadePhysicsOnDetonate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSettleAfterDetonate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpinStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayedDestroyTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MassKg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReferenceMassKg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProjectileRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseBounciness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RestSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowSpeedMassInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityMassInfluence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GrenadeExplosionEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* GrenadeBounceEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeBounceImpactThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* GrenadeBounceImpactRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GrenadeBounceAudioCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrenadeBounceNoiseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrenadeExplosionNoiseTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* CollisionComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GrenadeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* GrenadeAkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRGrenadePredictionComponent* GrenadePredictionComponent;
    
    AGrenadeActor(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintNativeEvent)
    void Throw(const FVector& ThrowDir, float ThrowSpeed, const FVector& HandWorldPos);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnProjectileStop(const FHitResult& ImpactResult);
    
    UFUNCTION(BlueprintCallable)
    void OnProjectileBounce(const FHitResult& ImpactResult, const FVector& ImpactVelocity);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRGrenadePredictionConfig MakePredictionConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnExplode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWeightedThrowSpeed(float ThrowSpeed) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRGrenadePredictionComponent* GetPredictionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPostExplodeLifetime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMassScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemExplosionRadiusCm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemExplosionDelay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetItemEffectTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlightRestSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlightGravityScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlightFriction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFlightBounciness() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Explode_MC();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Explode();
    
protected:
    UFUNCTION(BlueprintCallable)
    void DelayedDestroy();
    
};

