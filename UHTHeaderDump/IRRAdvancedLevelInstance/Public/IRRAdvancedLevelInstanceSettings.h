#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "IRRLevelInstanceMaterialParams.h"
#include "IRRAdvancedLevelInstanceSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class IRRADVANCEDLEVELINSTANCE_API UIRRAdvancedLevelInstanceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<float, FIRRLevelInstanceMaterialParams> MaterialParams;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoReplaceLevelInstances;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ZoneSublevelPathPrefixes;
    
    UIRRAdvancedLevelInstanceSettings();

};

