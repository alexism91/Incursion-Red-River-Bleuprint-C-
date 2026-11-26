#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "AudioMaterialButtonStyle.h"
#include "AudioMaterialButtonWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioMaterialButtonWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMaterialButtonStyle ButtonStyle;
    
    UAudioMaterialButtonWidgetStyle();

};

