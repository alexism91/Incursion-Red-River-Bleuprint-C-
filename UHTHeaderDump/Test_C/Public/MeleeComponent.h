#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EquippableComponent.h"
#include "Templates/SubclassOf.h"
#include "MeleeComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UCameraShakeBase;
class UMeleeDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UMeleeComponent : public UEquippableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TraceSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor TraceColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UAkAudioEvent*> ImpactSounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCameraShakeBase> ImpactCameraShake;
    
    UMeleeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void OnMeleeAttackImpact_MC(FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnMeleeAttackImpact(FHitResult HitResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Attack();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void HandleOnAttackHit(FHitResult HitResult, float DamageAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeleeDataAsset* GetMeleeDataAsset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetIgnoredActors();
    
    UFUNCTION(BlueprintCallable)
    void Attack();
    
};

