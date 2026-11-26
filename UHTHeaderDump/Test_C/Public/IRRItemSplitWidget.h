#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=ETextCommit -FallbackName=ETextCommit
#include "ContainerItem.h"
#include "OnSplitAmountChangedDelegate.h"
#include "IRRItemSplitWidget.generated.h"

class UEditableTextBox;
class UInventoryComponent;
class USlider;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UIRRItemSplitWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSplitAmountChanged OnSplitAmountChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* AmountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* MaxAmountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* AmountSlider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MaxAmountFormat;
    
    UIRRItemSplitWidget();

    UFUNCTION(BlueprintCallable)
    void Split();
    
    UFUNCTION(BlueprintCallable)
    void SetupSplit(UInventoryComponent* InInventory, FContainerItem InItem);
    
    UFUNCTION(BlueprintCallable)
    void SetSplitAmount(int32 NewAmount);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSliderChanged(float Value);
    
    UFUNCTION(BlueprintCallable)
    void HandleAmountCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
    UFUNCTION(BlueprintCallable)
    void HandleAmountChanged(const FText& Text);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSplitAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxSplitAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSplit() const;
    
};

