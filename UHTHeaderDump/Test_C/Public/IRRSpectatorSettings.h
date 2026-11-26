#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "IRRSpectatorViewSettings.h"
#include "IRRSpectatorSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TEST_C_API UIRRSpectatorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSpectatorViewSettings View;
    
    UIRRSpectatorSettings();

};

