#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "IRRRaidTimerWidget.generated.h"

class UIRRTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRRaidTimerWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRTextBlock* RaidTime;
    
public:
    UIRRRaidTimerWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatRemainingTime(float Seconds);
    
};

