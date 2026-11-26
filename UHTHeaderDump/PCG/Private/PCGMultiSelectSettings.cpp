#include "PCGMultiSelectSettings.h"

UPCGMultiSelectSettings::UPCGMultiSelectSettings() {
    this->SelectionMode = EPCGControlFlowSelectionMode::Integer;
    this->IntegerSelection = 0;
    this->IntOptions.AddDefaulted(1);
}


