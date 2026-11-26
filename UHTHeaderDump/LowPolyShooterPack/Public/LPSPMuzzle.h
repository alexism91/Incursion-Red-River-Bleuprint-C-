#pragma once
#include "CoreMinimal.h"
#include "LPSPAttachment.h"
#include "LPSPMuzzle.generated.h"

class UParticleSystem;
class USoundCue;

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPMuzzle : public ALPSPAttachment {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* FiringCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* FlashParticles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverheats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShotsToOverheat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* OverheatParticles;
    
public:
    ALPSPMuzzle(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldOverheat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSocketName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetShotsToOverheat() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetOverheatParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UParticleSystem* GetFlashParticles() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundCue* GetFiringCue() const;
    
};

