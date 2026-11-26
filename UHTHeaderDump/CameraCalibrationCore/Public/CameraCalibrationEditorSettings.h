#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "CameraCalibrationEditorSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=EditorPerProjectUserSettings)
class UCameraCalibrationEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UCameraCalibrationEditorSettings();

};

