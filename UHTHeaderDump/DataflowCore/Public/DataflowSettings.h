#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "NodeColors.h"
#include "PinSettings.h"
#include "TransformLevelColors.h"
#include "DataflowSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Editor)
class UDataflowSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNodeColors> NodeColorsMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FPinSettings> PinSettingsMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransformLevelColors TransformLevelColors;
    
    UDataflowSettings();

};

