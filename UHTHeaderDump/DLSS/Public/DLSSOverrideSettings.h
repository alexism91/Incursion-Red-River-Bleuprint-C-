#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EDLSSSettingOverride.h"
#include "DLSSOverrideSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, ProjectUserConfig, Config=Engine)
class UDLSSOverrideSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDLSSIncompatiblePluginsToolsWarnings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride EnableDLSSInEditorViewportsOverride;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride;
    
    UDLSSOverrideSettings();

};

