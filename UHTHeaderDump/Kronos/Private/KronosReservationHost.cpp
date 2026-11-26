#include "KronosReservationHost.h"

AKronosReservationHost::AKronosReservationHost(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bLogReservations = true;
}

void AKronosReservationHost::TimeoutReservation(const FUniqueNetIdRepl& PlayerId) {
}


EKronosReservationCompleteResult AKronosReservationHost::K2_PreRegisterReservation_Implementation(const FKronosReservation& InReservation) {
    return EKronosReservationCompleteResult::UnknownError;
}




void AKronosReservationHost::K2_InitRegisteredReservation_Implementation(FKronosReservation& InReservation) {
}

TArray<FKronosReservation> AKronosReservationHost::GetReservations() const {
    return TArray<FKronosReservation>();
}

int32 AKronosReservationHost::GetNumReservations() const {
    return 0;
}

int32 AKronosReservationHost::GetNumConsumedReservations() const {
    return 0;
}

int32 AKronosReservationHost::GetMaxNumReservations() const {
    return 0;
}

bool AKronosReservationHost::FindReservation(const FUniqueNetIdRepl& PlayerId, FKronosReservationMember& OutPlayerReservation, FKronosReservation& OutOwningReservation) const {
    return false;
}

void AKronosReservationHost::DumpReservations() const {
}


