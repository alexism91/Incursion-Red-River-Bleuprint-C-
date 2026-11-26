#pragma once
#include "CoreMinimal.h"
#include "IRRAIDifficultyStop.h"
#include "IRRAIPresetRequestWidget.h"
#include "OnAIDifficultyStopChangedDelegate.h"
#include "IRRAIDifficultySetupWidget.generated.h"

class UIRRBaseButtonWidget;
class UPanelWidget;
class URichTextBlock;
class USlider;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UIRRAIDifficultySetupWidget : public UIRRAIPresetRequestWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAIDifficultyStopChanged OnStopChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAIDifficultyStop> Stops;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultStop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOpenOnCurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ModNotice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* DifficultySlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* DifficultyNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* ModNoticeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* StopLabels;
    
    UIRRAIDifficultySetupWidget();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldShowDifficultySetup();
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedStop(int32 StopIndex);
    
    UFUNCTION(BlueprintCallable)
    static void MarkDifficultyConfirmed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnStopChanged(int32 StopIndex, const FIRRAIDifficultyStop& Stop);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleStopLabelClicked(UIRRBaseButtonWidget* Button);
    
    UFUNCTION(BlueprintCallable)
    void HandleSliderChanged(float Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSelectedVariantId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectedStop() const;
    
};

