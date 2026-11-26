#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "WorldPartitionEditorPerProjectUserSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=EditorPerProjectUserSettings)
class UWorldPartitionEditorPerProjectUserSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UWorldPartitionEditorPerProjectUserSettings();

};

