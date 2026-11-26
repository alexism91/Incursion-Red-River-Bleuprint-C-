#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InventoryCurrencyWidget.generated.h"

class UInventoryComponent;
class UInventoryCurrencyTextWidget;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInventoryCurrencyWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryCurrencyTextWidget* PrimaryCurrency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryCurrencyTextWidget* SecondaryCurrency;
    
    UInventoryCurrencyWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCurrencyChanged(int32 Cash, int32 BloodDiamonds);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InitInventoryCurrencyWidget(UInventoryComponent* InventoryComponent);
    
};

