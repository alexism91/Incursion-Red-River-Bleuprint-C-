#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateWidgetStyleContainerBase -FallbackName=SlateWidgetStyleContainerBase
#include "AudioMaterialKnobStyle.h"
#include "AudioMaterialKnobWidgetStyle.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioMaterialKnobWidgetStyle : public USlateWidgetStyleContainerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMaterialKnobStyle KnobStyle;
    
    UAudioMaterialKnobWidgetStyle();

};

