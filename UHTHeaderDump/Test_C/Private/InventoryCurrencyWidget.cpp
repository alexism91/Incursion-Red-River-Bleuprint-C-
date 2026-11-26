#include "InventoryCurrencyWidget.h"

UInventoryCurrencyWidget::UInventoryCurrencyWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->PrimaryCurrency = NULL;
    this->SecondaryCurrency = NULL;
}

void UInventoryCurrencyWidget::OnCurrencyChanged_Implementation(int32 Cash, int32 BloodDiamonds) {
}

void UInventoryCurrencyWidget::InitInventoryCurrencyWidget_Implementation(UInventoryComponent* InventoryComponent) {
}


