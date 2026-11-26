#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "MassSettings.generated.h"

class UMassModuleSettings;

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Mass)
class UMassSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<FName, UMassModuleSettings*> ModuleSettings;
    
    UMassSettings();

};

