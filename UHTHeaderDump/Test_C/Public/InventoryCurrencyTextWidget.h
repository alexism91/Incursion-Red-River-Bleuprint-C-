#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "InventoryCurrencyTextWidget.generated.h"

class UIRRTextBlock;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UInventoryCurrencyTextWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRTextBlock* LeadingZeros;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRTextBlock* FollowingNumbers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* PrimaryCurrencyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* SecondaryCurrencyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrencyDigits;
    
    UInventoryCurrencyTextWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateCurrency(int32 NewCurrency, FGameplayTag MarketTag);
    
};

