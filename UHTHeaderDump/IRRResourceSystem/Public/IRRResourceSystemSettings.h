#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "IRRResourceSystemSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class IRRRESOURCESYSTEM_API UIRRResourceSystemSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ResourceSaveGameName;
    
    UIRRResourceSystemSettings();

};

