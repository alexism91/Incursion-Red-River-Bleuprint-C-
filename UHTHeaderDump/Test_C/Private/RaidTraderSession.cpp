#include "RaidTraderSession.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "RaidTraderStockComponent.h"

ARaidTraderSession::ARaidTraderSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyRelevantToOwner = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Stock = CreateDefaultSubobject<URaidTraderStockComponent>(TEXT("Stock"));
    this->OwningTrader = NULL;
    this->bAcceptCash = true;
    this->bGiveChange = false;
    this->PriceMultiplier = 1.00f;
    this->InventoryWidgetClass = NULL;
    this->LootContentName = TEXT("Trader");
}

void ARaidTraderSession::WithdrawOffer(FGuid ItemUID) {
}

void ARaidTraderSession::WithdrawAll() {
}

void ARaidTraderSession::Trade() {
}

void ARaidTraderSession::SetOfferCount(FGuid ItemUID, int32 Count) {
}

void ARaidTraderSession::ServerWithdrawOffer_Implementation(FGuid ItemUID) {
}

void ARaidTraderSession::ServerWithdrawAll_Implementation() {
}

void ARaidTraderSession::ServerTrade_Implementation() {
}

void ARaidTraderSession::ServerSetOfferCount_Implementation(FGuid ItemUID, int32 Count) {
}

void ARaidTraderSession::ServerOfferItem_Implementation(FContainerItem Item, UInventoryComponent* ItemOwnerComp, int32 Count) {
}

void ARaidTraderSession::PresentToPlayerInventory() {
}

void ARaidTraderSession::OnRep_Offers() {
}

void ARaidTraderSession::OfferItem(const FContainerItem& Item, UInventoryComponent* ItemOwnerComp, int32 Count) {
}

void ARaidTraderSession::NotifyOpened_Implementation() {
}

UInventoryComponent* ARaidTraderSession::GetStock() const {
    return NULL;
}

FRaidTradeQuote ARaidTraderSession::GetQuote() {
    return FRaidTradeQuote{};
}

UInventoryComponent* ARaidTraderSession::GetPlayerInventory() const {
    return NULL;
}

ARaidTrader* ARaidTraderSession::GetOwningTrader() const {
    return NULL;
}

TArray<FRaidTradeOffer> ARaidTraderSession::GetOffers() const {
    return TArray<FRaidTradeOffer>();
}

void ARaidTraderSession::ClientNotifyTradeResult_Implementation(bool bSuccess, const FText& reason) {
}

void ARaidTraderSession::ClientNotifyOpened_Implementation() {
}

bool ARaidTraderSession::CanOfferItem(const FContainerItem& Item, UInventoryComponent* ItemOwnerComp, FText& OutReason) const {
    return false;
}

void ARaidTraderSession::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ARaidTraderSession, OwningTrader);
    DOREPLIFETIME(ARaidTraderSession, Offers);
    DOREPLIFETIME(ARaidTraderSession, AcceptedPlayerItems);
    DOREPLIFETIME(ARaidTraderSession, bAcceptCash);
    DOREPLIFETIME(ARaidTraderSession, bGiveChange);
    DOREPLIFETIME(ARaidTraderSession, PriceMultiplier);
    DOREPLIFETIME(ARaidTraderSession, InventoryWidgetClass);
    DOREPLIFETIME(ARaidTraderSession, LootContentName);
}


