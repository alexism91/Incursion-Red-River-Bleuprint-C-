#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "AudioMaterialMeterStyle.h"
#include "AudioMaterialMeterWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioMaterialMeterWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMaterialMeterStyle MeterStyle;
    
    UAudioMaterialMeterWidgetStyle();

};

