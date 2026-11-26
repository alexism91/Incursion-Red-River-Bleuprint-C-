#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "RigVMEditorSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=EditorPerProjectUserSettings)
class URigVMEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    URigVMEditorSettings();

};

