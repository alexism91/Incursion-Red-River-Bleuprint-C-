#include "IRRMarketAvailability.h"

FIRRMarketAvailability::FIRRMarketAvailability() {
    this->DefaultMarketPrice = 0.00f;
    this->BlackMarketPrice = 0.00f;
    this->bSoldInStockMarket = false;
    this->bSoldInBlackMarket = false;
    this->bCanBeSoldInStockMarket = false;
    this->bCanBeSoldInBlackMarket = false;
    this->bIsSold = false;
}

