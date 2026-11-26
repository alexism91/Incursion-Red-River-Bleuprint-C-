#pragma once
#include "CoreMinimal.h"
#include "PanelWidget.h"
#include "Overlay.generated.h"

class UOverlaySlot;
class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UOverlay : public UPanelWidget {
    GENERATED_BODY()
public:
    UOverlay();

    UFUNCTION(BlueprintCallable)
    bool ReplaceOverlayChildAt(int32 Index, UWidget* Content);
    
    UFUNCTION(BlueprintCallable)
    UOverlaySlot* AddChildToOverlay(UWidget* Content);
    
};

