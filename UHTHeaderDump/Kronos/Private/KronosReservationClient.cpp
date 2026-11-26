#include "KronosReservationClient.h"

AKronosReservationClient::AKronosReservationClient(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void AKronosReservationClient::ServerRequestReservation_Implementation(const FKronosReservation& Reservation) {
}

void AKronosReservationClient::ServerCancelReservation_Implementation(const FKronosReservation& Reservation) {
}

void AKronosReservationClient::ClientReceiveReservationResponse_Implementation(EKronosReservationCompleteResult Result) {
}

void AKronosReservationClient::ClientCancelReservationComplete_Implementation() {
}


