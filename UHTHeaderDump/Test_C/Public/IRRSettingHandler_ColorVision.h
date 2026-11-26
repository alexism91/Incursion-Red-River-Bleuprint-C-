#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRSettingHandler -FallbackName=IRRSettingHandler
#include "EIRRColorVisionSetting.h"
#include "IRRSettingHandler_ColorVision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TEST_C_API UIRRSettingHandler_ColorVision : public UIRRSettingHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRColorVisionSetting Setting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UIRRSettingHandler_ColorVision();

};

