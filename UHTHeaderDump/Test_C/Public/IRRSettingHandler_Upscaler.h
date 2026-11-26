#pragma once
#include "CoreMinimal.h"
#include "EIRRUpscaler.h"
#include "IRRSettingHandler_RenderFeature.h"
#include "IRRSettingHandler_Upscaler.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TEST_C_API UIRRSettingHandler_Upscaler : public UIRRSettingHandler_RenderFeature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIRRUpscaler> Methods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIRRUpscaler> DefaultPreference;
    
    UIRRSettingHandler_Upscaler();

};

