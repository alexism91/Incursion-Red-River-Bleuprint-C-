#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "IRRAIHearingTagConfig.h"
#include "IRRAIHearingSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class TEST_C_API UIRRAIHearingSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIHearingTagConfig DefaultConfig;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIRRAIHearingTagConfig> PerTagConfigs;
    
    UIRRAIHearingSettings();

};

