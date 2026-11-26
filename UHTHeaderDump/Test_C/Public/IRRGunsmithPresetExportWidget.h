#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "IRRGunsmithPresetRequestWidget.h"
#include "IRRGunsmithPresetExportWidget.generated.h"

class UEditableTextBox;
class UIRRBaseButtonWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UIRRGunsmithPresetExportWidget : public UIRRGunsmithPresetRequestWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNameLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* NameBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* CopyButton;
    
    UIRRGunsmithPresetExportWidget();

private:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void HandleCopyClicked(UIRRBaseButtonWidget* Button);
    
public:
    UFUNCTION(BlueprintCallable)
    bool CopyToClipboard(FText& OutMessage);
    
};

