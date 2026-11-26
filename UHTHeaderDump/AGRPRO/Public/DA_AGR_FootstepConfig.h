#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "DA_AGR_FootstepConfig.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;
class USoundAttenuation;
class USoundConcurrency;

UCLASS(Blueprintable)
class AGRPRO_API UDA_AGR_FootstepConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UAkAudioEvent*> Sounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, UNiagaraSystem*> Particles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TEnumAsByte<EPhysicalSurface>, FName> Surfaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAttenuation* Attenuation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundConcurrency* Concurrency;
    
    UDA_AGR_FootstepConfig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVelocityRange(float& MinRange, float& MaxRange) const;
    
    UFUNCTION(BlueprintCallable)
    void GetSurfaceReaction(TEnumAsByte<EPhysicalSurface> InputParam, UAkAudioEvent*& Sound, UNiagaraSystem*& Particle, FName& Surface);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetFootStepSettings(USoundAttenuation*& AttenuationRef, USoundConcurrency*& ConcurrencyRef) const;
    
};

