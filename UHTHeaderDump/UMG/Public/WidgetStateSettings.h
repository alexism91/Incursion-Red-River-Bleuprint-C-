#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "WidgetStateSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Game)
class UWidgetStateSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UWidgetStateSettings();

};

