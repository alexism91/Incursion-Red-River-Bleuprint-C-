#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "HorizontalBox.generated.h"

class UHorizontalBoxSlot;
class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UHorizontalBox : public UPanelWidget {
    GENERATED_BODY()
public:
    UHorizontalBox();

    UFUNCTION(BlueprintCallable)
    UHorizontalBoxSlot* AddChildToHorizontalBox(UWidget* Content);
    
};

