#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "IRRAIProjectSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class IRRADVANCEDAI_API UIRRAIProjectSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UIRRAIProjectSettings();

};

