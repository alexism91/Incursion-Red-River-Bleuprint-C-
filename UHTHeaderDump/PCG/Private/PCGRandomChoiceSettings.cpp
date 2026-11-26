#include "PCGRandomChoiceSettings.h"

UPCGRandomChoiceSettings::UPCGRandomChoiceSettings() {
    this->bFixedMode = true;
    this->FixedNumber = 1;
    this->Ratio = 0.50f;
    this->bOutputDiscardedEntries = true;
    this->bHasCustomSeedSource = false;
    this->bUseFirstAttributeOnly = true;
}


