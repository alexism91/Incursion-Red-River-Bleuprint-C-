#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=SenseObstacleInterface -FallbackName=SenseObstacleInterface
#include "EIRRAreaEffectAIAvoidance.h"
#include "GrenadeActor.h"
#include "GrenadeActor_AreaEffect.generated.h"

class AActor;
class UAkAudioEvent;
class UAkRtpc;
class UIRRZoneEffectSourceComponent;
class UNiagaraComponent;
class UNiagaraSystem;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AGrenadeActor_AreaEffect : public AGrenadeActor, public ISenseObstacleInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AreaEffectDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve LifetimeScaleCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleEffectVolumeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScaleActorRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAreaEffectAIAvoidance AIAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AreaEffectAkStartEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* AreaEffectEndEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* AreaEffectLifetimeRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* EffectVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRZoneEffectSourceComponent* ZoneEffectSource;
    
    AGrenadeActor_AreaEffect(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UNiagaraComponent* SpawnAreaEffectFX(UNiagaraSystem* System);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEffectVolumeEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnEffectVolumeBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnLifetimeScaleUpdated(float NormalizedLifetime, float ScaleFactor);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAreaEffectStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAreaEffectEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetNormalizedAreaEffectLifetime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLifetimeScaleFactor(float NormalizedLifetime) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNiagaraComponent* GetAreaEffectFX() const;
    

    // Fix for true pure virtual functions not being implemented
};

