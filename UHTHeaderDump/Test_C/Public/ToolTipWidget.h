#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ToolTipWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UToolTipWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UToolTipWidget();

};

