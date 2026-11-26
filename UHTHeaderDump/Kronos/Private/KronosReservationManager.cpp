#include "KronosReservationManager.h"

UKronosReservationManager::UKronosReservationManager() {
    this->ReservationBeaconListener = NULL;
    this->ReservationBeaconHost = NULL;
}

bool UKronosReservationManager::ShouldCreateReservationHost_Implementation() const {
    return false;
}

UKronosReservationManager* UKronosReservationManager::Get(const UObject* WorldContextObject) {
    return NULL;
}


