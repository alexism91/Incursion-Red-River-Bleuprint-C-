#include "PCGFilterElementsByIndexSettings.h"

UPCGFilterElementsByIndexSettings::UPCGFilterElementsByIndexSettings() {
    this->bSelectIndicesByInput = true;
    this->SelectedIndices = TEXT(":");
    this->bOutputDiscardedElements = false;
    this->bInvertFilter = false;
}


