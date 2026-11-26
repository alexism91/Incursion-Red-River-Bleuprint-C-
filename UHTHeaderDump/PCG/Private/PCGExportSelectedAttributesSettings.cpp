#include "PCGExportSelectedAttributesSettings.h"

UPCGExportSelectedAttributesSettings::UPCGExportSelectedAttributesSettings() {
    this->Format = EPCGExportAttributesFormat::Binary;
    this->Layout = EPCGExportAttributesLayout::ByElement;
    this->bExportAllAttributes = true;
    this->AttributeSelectors.AddDefaulted(1);
    this->bAddCustomDataVersion = false;
    this->CustomVersion = 0;
}


