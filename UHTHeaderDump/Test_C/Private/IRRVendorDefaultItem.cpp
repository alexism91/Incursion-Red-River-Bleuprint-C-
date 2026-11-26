#include "IRRVendorDefaultItem.h"

FIRRVendorDefaultItem::FIRRVendorDefaultItem() {
    this->bVariation = false;
    this->bOverrideDefaultStockCount = false;
    this->DefaultStockCount = 0;
    this->bOverrideMaxStockCount = false;
    this->MaxStockCount = 0;
    this->bOverrideRestockRate = false;
    this->RestockRate = 0.00f;
    this->bOverrideFactionAvailability = false;
}

