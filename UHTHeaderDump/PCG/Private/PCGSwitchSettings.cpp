#include "PCGSwitchSettings.h"

UPCGSwitchSettings::UPCGSwitchSettings() {
    this->SelectionMode = EPCGControlFlowSelectionMode::Integer;
    this->IntegerSelection = 0;
    this->IntOptions.AddDefaulted(1);
}


