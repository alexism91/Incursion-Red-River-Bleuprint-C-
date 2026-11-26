#include "RaidTradeWidget.h"

URaidTradeWidget::URaidTradeWidget() {
    this->OfferContainer = NULL;
    this->DropZone = NULL;
    this->OfferEntryClass = NULL;
    this->bFillEntries = true;
    this->Session = NULL;
}

void URaidTradeWidget::WithdrawOffer(FGuid ItemUID) {
}

void URaidTradeWidget::WithdrawAll() {
}

void URaidTradeWidget::Trade() {
}

void URaidTradeWidget::SetSession(ARaidTraderSession* InSession) {
}

void URaidTradeWidget::RefreshQuote() {
}

void URaidTradeWidget::OfferItem(const FContainerItem& Item, UInventoryComponent* ItemOwnerComp, int32 Count) {
}








void URaidTradeWidget::HandleTradeCompleted(bool bSuccess, FText reason) {
}

void URaidTradeWidget::HandleOffersChanged() {
}

ARaidTraderSession* URaidTradeWidget::GetSession() const {
    return NULL;
}

FRaidTradeQuote URaidTradeWidget::GetQuote() const {
    return FRaidTradeQuote{};
}

bool URaidTradeWidget::CanOfferItem(const FContainerItem& Item, UInventoryComponent* ItemOwnerComp, FText& OutReason) const {
    return false;
}


