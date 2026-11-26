#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRSettingHandler -FallbackName=IRRSettingHandler
#include "IRRSettingHandler_RenderFeature.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class TEST_C_API UIRRSettingHandler_RenderFeature : public UIRRSettingHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUnsupportedOptions;
    
    UIRRSettingHandler_RenderFeature();

};

