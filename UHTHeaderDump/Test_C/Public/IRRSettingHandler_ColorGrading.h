#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRSettingHandler -FallbackName=IRRSettingHandler
#include "EIRRPostProcessSetting.h"
#include "IRRSettingHandler_ColorGrading.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TEST_C_API UIRRSettingHandler_ColorGrading : public UIRRSettingHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRPostProcessSetting Setting;
    
    UIRRSettingHandler_ColorGrading();

};

