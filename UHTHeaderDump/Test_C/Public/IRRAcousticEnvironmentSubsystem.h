#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkOutdoorsRoomParameters -FallbackName=AkOutdoorsRoomParameters
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "EIRRAcousticEnvironment.h"
#include "IRRAcousticEnvironmentSubsystem.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API UIRRAcousticEnvironmentSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* OutdoorsAmbience;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> SwitchValues;
    
public:
    UIRRAcousticEnvironmentSubsystem();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetLevelAcousticEnvironment(const UObject* WorldContextObject, EIRRAcousticEnvironment ExteriorEnvironment, FAkOutdoorsRoomParameters OutdoorsRoomParameters, UAkAudioEvent* NewOutdoorsAmbience);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRAcousticEnvironment GetExteriorEnvironment() const;
    
};

