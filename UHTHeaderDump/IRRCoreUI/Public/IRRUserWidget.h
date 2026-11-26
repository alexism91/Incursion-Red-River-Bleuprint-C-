#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "IRRUserWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UIRRUserWidget();

};

