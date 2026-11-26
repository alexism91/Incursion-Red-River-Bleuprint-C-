#include "InterchangeEditorSettings.h"

UInterchangeEditorSettings::UInterchangeEditorSettings() {
    this->bShowImportDialogAtReimport = false;
}

void UInterchangeEditorSettings::SetUsedGroupName(const FName& InUsedGroupName) {
}

FName UInterchangeEditorSettings::GetUsedGroupName() const {
    return NAME_None;
}

TArray<FName> UInterchangeEditorSettings::GetSelectableItems() const {
    return TArray<FName>();
}


