#include "RaidTradeOfferWidget.h"

URaidTradeOfferWidget::URaidTradeOfferWidget() {
    this->Session = NULL;
    this->ItemSizeBox = NULL;
    this->ItemWidget = NULL;
    this->NameText = NULL;
    this->CountText = NULL;
    this->ValueText = NULL;
    this->RemoveButton = NULL;
    this->IncreaseButton = NULL;
    this->DecreaseButton = NULL;
    this->CountFormat = FText::FromString(TEXT("x{0}"));
    this->ValueFormat = FText::FromString(TEXT("{0} $"));
}

void URaidTradeOfferWidget::SetCount(int32 NewCount) {
}

void URaidTradeOfferWidget::Remove() {
}


bool URaidTradeOfferWidget::IsFromTrader() const {
    return false;
}

void URaidTradeOfferWidget::Increment() {
}

void URaidTradeOfferWidget::HandleRemoveClicked(UIRRBaseButtonWidget* ButtonRef) {
}

void URaidTradeOfferWidget::HandleIncreaseClicked(UIRRBaseButtonWidget* ButtonRef) {
}

void URaidTradeOfferWidget::HandleDecreaseClicked(UIRRBaseButtonWidget* ButtonRef) {
}

int32 URaidTradeOfferWidget::GetMaxCount() const {
    return 0;
}

UInventoryComponent* URaidTradeOfferWidget::GetItemOwnerInventory() const {
    return NULL;
}

void URaidTradeOfferWidget::Decrement() {
}


