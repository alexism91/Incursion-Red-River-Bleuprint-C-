#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ContainerItem.h"
#include "ItemEligibilitySource.h"
#include "OnRaidTradeCompletedDelegate.h"
#include "OnRaidTradeExecutedDelegate.h"
#include "OnRaidTradeOffersChangedDelegate.h"
#include "RaidTradeOffer.h"
#include "RaidTradeQuote.h"
#include "Templates/SubclassOf.h"
#include "RaidTraderSession.generated.h"

class ARaidTrader;
class UInventoryComponent;
class URaidTraderStockComponent;
class UUserWidget;

UCLASS(Blueprintable, NoExport, NotPlaceable)
class TEST_C_API ARaidTraderSession : public AActor, public IItemEligibilitySource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeOffersChanged OnOffersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeCompleted OnTradeCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRaidTradeExecuted OnTradeExecuted;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URaidTraderStockComponent* Stock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ARaidTrader* OwningTrader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Offers, meta=(AllowPrivateAccess=true))
    TArray<FRaidTradeOffer> Offers;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AcceptedPlayerItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAcceptCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bGiveChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PriceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> InventoryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FName LootContentName;
    
public:
    ARaidTraderSession(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void WithdrawOffer(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    void WithdrawAll();
    
    UFUNCTION(BlueprintCallable)
    void Trade();
    
    UFUNCTION(BlueprintCallable)
    void SetOfferCount(FGuid ItemUID, int32 Count);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerWithdrawOffer(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerWithdrawAll();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerTrade();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetOfferCount(FGuid ItemUID, int32 Count);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerOfferItem(FContainerItem Item, UInventoryComponent* ItemOwnerComp, int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    void PresentToPlayerInventory();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Offers();
    
public:
    UFUNCTION(BlueprintCallable)
    void OfferItem(const FContainerItem& Item, UInventoryComponent* ItemOwnerComp, int32 Count);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyOpened();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetStock() const;
    
    UFUNCTION(BlueprintCallable)
    FRaidTradeQuote GetQuote();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInventoryComponent* GetPlayerInventory() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ARaidTrader* GetOwningTrader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FRaidTradeOffer> GetOffers() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyTradeResult(bool bSuccess, const FText& reason);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientNotifyOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOfferItem(const FContainerItem& Item, UInventoryComponent* ItemOwnerComp, FText& OutReason) const;
    

    // Fix for true pure virtual functions not being implemented
};

