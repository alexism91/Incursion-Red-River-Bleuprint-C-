#include "IRRRowSlotSpec.h"

FIRRRowSlotSpec::FIRRRowSlotSpec() {
    this->Slot = EIRRRowSlot::Indent;
    this->Sizing = EIRRSlotSizing::Auto;
    this->FillWeight = 0.00f;
    this->FixedWidth = 0.00f;
}

