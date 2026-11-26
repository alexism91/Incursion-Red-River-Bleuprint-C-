#include "InventoryCurrencyTextWidget.h"

UInventoryCurrencyTextWidget::UInventoryCurrencyTextWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->LeadingZeros = NULL;
    this->FollowingNumbers = NULL;
    this->PrimaryCurrencyIcon = NULL;
    this->SecondaryCurrencyIcon = NULL;
    this->CurrencyDigits = 9;
}

void UInventoryCurrencyTextWidget::UpdateCurrency_Implementation(int32 NewCurrency, FGameplayTag MarketTag) {
}


