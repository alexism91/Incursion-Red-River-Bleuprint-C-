#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "ContainerItem.h"
#include "IRRGunsmithPresetRequestWidget.h"
#include "OnGunsmithPresetImportedDelegate.h"
#include "IRRGunsmithPresetImportWidget.generated.h"

class UEditableTextBox;
class UIRRBaseButtonWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UIRRGunsmithPresetImportWidget : public UIRRGunsmithPresetRequestWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGunsmithPresetImported OnPresetImported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyImportedPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* CodeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* PasteButton;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FContainerItem ImportedPresetItem;
    
public:
    UIRRGunsmithPresetImportWidget();

    UFUNCTION(BlueprintCallable)
    void PasteFromClipboard();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleTextChanged(const FText& Text);
    
    UFUNCTION(BlueprintCallable)
    void HandlePasteClicked(UIRRBaseButtonWidget* Button);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FContainerItem GetImportedPresetItem() const;
    
};

