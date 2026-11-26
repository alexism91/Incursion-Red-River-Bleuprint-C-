#include "PCGPin.h"

UPCGPin::UPCGPin() {
    this->Node = NULL;
}

void UPCGPin::SetToolTip(const FText& InTooltip) {
}

bool UPCGPin::IsOutputPin() const {
    return false;
}

bool UPCGPin::IsConnected() const {
    return false;
}

FText UPCGPin::GetTooltip() const {
    return FText::GetEmpty();
}


