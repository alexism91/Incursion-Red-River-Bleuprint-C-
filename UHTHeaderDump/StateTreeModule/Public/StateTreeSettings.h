#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "StateTreeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=StateTree)
class UStateTreeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStartDebuggerTracesOnNonEditorTargets;
    
    UStateTreeSettings();

};

