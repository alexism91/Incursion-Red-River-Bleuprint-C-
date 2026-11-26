#include "StatItemWidget.h"

UStatItemWidget::UStatItemWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->StatItemAppearance = EStatItemAppearanceType::ProgressBar;
    this->StatIconImage = NULL;
    this->StatNameText = NULL;
    this->CurrentValueText = NULL;
    this->MaxValueText = NULL;
    this->UnitText = NULL;
    this->CompareValueText = NULL;
    this->CurrentValue = 0.00f;
}

void UStatItemWidget::InitStatItem_Implementation(FContainerItem NewContainerItem, FBaseStatItem NewStatItem, float NewCurrentValue) {
}


