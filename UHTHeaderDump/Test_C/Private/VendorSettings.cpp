#include "VendorSettings.h"

UVendorSettings::UVendorSettings() {
    this->VendorDataTable = NULL;
    this->VendorItemsPerPage = 15;
    this->VendorSellMultiplierDefault = 0.80f;
    this->MinInRaidTimeToRestock = 0.00f;
    this->NotRequiredLoyaltyLevel = TEXT("Not Required Loyalty Level");
    this->NotEnoughSpace = TEXT("Not Enough Space");
    this->NotEnoughPrimary = TEXT("Not Enough Cash");
    this->NotEnoughSecondaryCurrency = TEXT("Not Enough Blood Diamonds");
    this->NotInStock = TEXT("Not In Stock");
    this->NotPurchasable = TEXT("Not for sale, find it in raid:");
}

void UVendorSettings::UpdateVendorDataTable() {
}

float UVendorSettings::GetEstimatedPriceRange(float Price) {
    return 0.0f;
}


