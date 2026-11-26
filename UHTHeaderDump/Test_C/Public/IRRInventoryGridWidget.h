#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "IRRInventoryGridWidget.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRInventoryGridWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Columns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighlightInset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledColor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateBrush CellBrush;
    
public:
    UIRRInventoryGridWidget();

    UFUNCTION(BlueprintCallable)
    void SetSlotEnabled(int32 SlotIndex, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightedSlots(const TArray<int32>& SlotIndexes, bool bValid);
    
    UFUNCTION(BlueprintCallable)
    void SetGridSize(int32 NewColumns, int32 NewRows);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRows() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetColumns() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearHighlights();
    
};

