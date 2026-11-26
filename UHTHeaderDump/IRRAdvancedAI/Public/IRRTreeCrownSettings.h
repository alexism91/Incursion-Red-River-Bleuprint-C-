#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "IRRTreeCrownSettings.generated.h"

class UIRRTreeCrownProfiles;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class IRRADVANCEDAI_API UIRRTreeCrownSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIRRTreeCrownProfiles> CrownProfiles;
    
    UIRRTreeCrownSettings();

};

