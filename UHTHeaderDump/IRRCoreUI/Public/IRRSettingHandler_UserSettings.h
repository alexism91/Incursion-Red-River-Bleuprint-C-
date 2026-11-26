#pragma once
#include "CoreMinimal.h"
#include "EIRRUserSetting.h"
#include "IRRSettingHandler.h"
#include "IRRSettingHandler_UserSettings.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class IRRCOREUI_API UIRRSettingHandler_UserSettings : public UIRRSettingHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRUserSetting Setting;
    
    UIRRSettingHandler_UserSettings();

};

