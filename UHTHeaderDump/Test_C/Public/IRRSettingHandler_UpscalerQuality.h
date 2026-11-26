#pragma once
#include "CoreMinimal.h"
#include "EIRRUpscalerQuality.h"
#include "IRRSettingHandler_RenderFeature.h"
#include "IRRSettingHandler_UpscalerQuality.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TEST_C_API UIRRSettingHandler_UpscalerQuality : public UIRRSettingHandler_RenderFeature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRUpscalerQuality DefaultQuality;
    
    UIRRSettingHandler_UpscalerQuality();

};

