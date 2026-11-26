#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "ContainerItem.h"
#include "OnRaidTradeDropHoverDelegate.h"
#include "OnRaidTradeEntriesRebuiltDelegate.h"
#include "OnRaidTradeEntryAddedDelegate.h"
#include "OnRaidTradeQuoteChangedDelegate.h"
#include "OnRaidTradeResultDelegate.h"
#include "OnRaidTradeSessionChangedDelegate.h"
#include "RaidTradeQuote.h"
#include "Templates/SubclassOf.h"
#include "RaidTradeWidget.generated.h"

class ARaidTraderSession;
class UInventoryComponent;
class UPanelWidget;
class URaidTradeDropZone;
class URaidTradeOfferWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API URaidTradeWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* OfferContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaidTradeDropZone* DropZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<URaidTradeOfferWidget> OfferEntryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin EntryPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFillEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<URaidTradeOfferWidget*> OfferEntries;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeSessionChanged OnSessionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeQuoteChanged OnQuoteChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeEntryAdded OnOfferEntryAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeEntriesRebuilt OnEntriesRebuilt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeEntriesRebuilt OnTradeRequested;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeResult OnTradeResult;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeDropHover OnDropHover;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ARaidTraderSession* Session;
    
public:
    URaidTradeWidget();

    UFUNCTION(BlueprintCallable)
    void WithdrawOffer(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    void WithdrawAll();
    
    UFUNCTION(BlueprintCallable)
    void Trade();
    
    UFUNCTION(BlueprintCallable)
    void SetSession(ARaidTraderSession* InSession);
    
    UFUNCTION(BlueprintCallable)
    void RefreshQuote();
    
    UFUNCTION(BlueprintCallable)
    void OfferItem(const FContainerItem& Item, UInventoryComponent* ItemOwnerComp, int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnTradeResult(bool bSuccess, const FText& reason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnTradeRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnSessionChanged(ARaidTraderSession* NewSession);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnQuoteChanged(const FRaidTradeQuote& Quote);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnOfferEntryAdded(URaidTradeOfferWidget* Entry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEntriesRebuilt(int32 Count);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnDropHover(bool bActive, bool bValid, const FText& reason);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleTradeCompleted(bool bSuccess, FText reason);
    
    UFUNCTION(BlueprintCallable)
    void HandleOffersChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARaidTraderSession* GetSession() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRaidTradeQuote GetQuote() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOfferItem(const FContainerItem& Item, UInventoryComponent* ItemOwnerComp, FText& OutReason) const;
    
};

