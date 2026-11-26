#pragma once
#include "CoreMinimal.h"
#include "IRRSettingHandler_RenderFeature.h"
#include "IRRSettingHandler_FrameGeneration.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TEST_C_API UIRRSettingHandler_FrameGeneration : public UIRRSettingHandler_RenderFeature {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOfferMultiFrame;
    
    UIRRSettingHandler_FrameGeneration();

};

