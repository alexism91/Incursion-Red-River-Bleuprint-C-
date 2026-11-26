#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "IRRCinematicCameraConfig.h"
#include "IRRCinematicCameraSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class TEST_C_API UIRRCinematicCameraSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRCinematicCameraConfig Settings;
    
    UIRRCinematicCameraSettings();

};

