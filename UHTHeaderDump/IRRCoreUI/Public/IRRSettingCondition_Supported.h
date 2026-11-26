#pragma once
#include "CoreMinimal.h"
#include "IRRSettingCondition.h"
#include "IRRSettingCondition_Supported.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class IRRCOREUI_API UIRRSettingCondition_Supported : public UIRRSettingCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SettingId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWhenUnsupported;
    
    UIRRSettingCondition_Supported();

};

