#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "RaidTradeOffer.h"
#include "RaidTradeOfferWidget.generated.h"

class ARaidTraderSession;
class UIRRBaseButtonWidget;
class UInventoryComponent;
class UItemWidget;
class USizeBox;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API URaidTradeOfferWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRaidTradeOffer Offer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARaidTraderSession* Session;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USizeBox* ItemSizeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UItemWidget* ItemWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* NameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* CountText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ValueText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* RemoveButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* IncreaseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* DecreaseButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ItemSlotSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CountFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ValueFormat;
    
    URaidTradeOfferWidget();

    UFUNCTION(BlueprintCallable)
    void SetCount(int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    void Remove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnOfferSetup(bool bFromTrader);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFromTrader() const;
    
    UFUNCTION(BlueprintCallable)
    void Increment();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleRemoveClicked(UIRRBaseButtonWidget* ButtonRef);
    
    UFUNCTION(BlueprintCallable)
    void HandleIncreaseClicked(UIRRBaseButtonWidget* ButtonRef);
    
    UFUNCTION(BlueprintCallable)
    void HandleDecreaseClicked(UIRRBaseButtonWidget* ButtonRef);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetItemOwnerInventory() const;
    
    UFUNCTION(BlueprintCallable)
    void Decrement();
    
};

