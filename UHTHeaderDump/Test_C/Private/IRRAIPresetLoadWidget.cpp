#include "IRRAIPresetLoadWidget.h"

UIRRAIPresetLoadWidget::UIRRAIPresetLoadWidget() {
    this->bShowBuiltInPresets = true;
    this->bPreselectActivePreset = false;
    this->LoadIntoVariantId = TEXT("Custom");
    this->PresetList = NULL;
    this->SelectedItem = NULL;
}

void UIRRAIPresetLoadWidget::SelectPresetItem(UIRRAIPresetListItem* Item) {
}


FName UIRRAIPresetLoadWidget::GetSelectedPresetId() const {
    return NAME_None;
}

UIRRAIPresetListItem* UIRRAIPresetLoadWidget::GetSelectedItem() const {
    return NULL;
}

TArray<UIRRAIPresetListItem*> UIRRAIPresetLoadWidget::GetPresetItems() const {
    return TArray<UIRRAIPresetListItem*>();
}

bool UIRRAIPresetLoadWidget::DeleteSelected() {
    return false;
}

bool UIRRAIPresetLoadWidget::DeletePresetItem(UIRRAIPresetListItem* PresetItem) {
    return false;
}

bool UIRRAIPresetLoadWidget::CanDeleteSelected() const {
    return false;
}

bool UIRRAIPresetLoadWidget::CanDeletePresetItem(const UIRRAIPresetListItem* PresetItem) const {
    return false;
}


