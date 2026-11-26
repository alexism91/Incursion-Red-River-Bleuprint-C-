#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "OnAIPresetAcceptStateChangedDelegate.h"
#include "OnAIPresetAppliedDelegate.h"
#include "OnAIPresetRequestEventDelegate.h"
#include "IRRAIPresetRequestWidget.generated.h"

class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UIRRAIPresetRequestWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIPresetAcceptStateChanged OnAcceptStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIPresetRequestEvent OnSubmitRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIPresetApplied OnPresetApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ReasonText;
    
    UIRRAIPresetRequestWidget();

    UFUNCTION(BlueprintCallable)
    bool TryAccept(FText& OutReason);
    
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NotifyAcceptStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAcceptStateChanged(bool bCanAccept, const FText& reason);
    
public:
    UFUNCTION(BlueprintCallable)
    void Cancel();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAccept(FText& OutReason) const;
    
};

