#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkSpatialAudioVolume -FallbackName=AkSpatialAudioVolume
#include "EIRRAcousticEnvironment.h"
#include "AdvancedAkSpatialAudioVolume.generated.h"

class UIRRSignificanceComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AAdvancedAkSpatialAudioVolume : public AAkSpatialAudioVolume {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOptimization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRSignificanceComponent* SignificanceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAcousticEnvironment EnvironmentOverride;
    
    AAdvancedAkSpatialAudioVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSpatialAudioActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSignificanceChanged(int32 Level, bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRoomVolumeM3() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRAcousticEnvironment GetAcousticEnvironment() const;
    
};

