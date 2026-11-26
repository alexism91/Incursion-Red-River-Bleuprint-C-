#pragma once
#include "CoreMinimal.h"
#include "IRRUserWidget.h"
#include "IRRBaseSettingSliderWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRBaseSettingSliderWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FractionalDigits;
    
    UIRRBaseSettingSliderWidget();

};

