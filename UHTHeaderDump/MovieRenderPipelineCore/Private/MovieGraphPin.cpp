#include "MovieGraphPin.h"

UMovieGraphPin::UMovieGraphPin() {
    this->Node = NULL;
}

bool UMovieGraphPin::IsTypeCompatibleWith(const UMovieGraphPin* InOtherPin) const {
    return false;
}

bool UMovieGraphPin::IsPinDirectionCompatibleWith(const UMovieGraphPin* OtherPin) const {
    return false;
}

bool UMovieGraphPin::IsOutputPin() const {
    return false;
}

bool UMovieGraphPin::IsInputPin() const {
    return false;
}

bool UMovieGraphPin::IsConnectionToBranchAllowed(const UMovieGraphPin* OtherPin, FText& OutError) const {
    return false;
}

bool UMovieGraphPin::IsConnected() const {
    return false;
}

UMovieGraphPin* UMovieGraphPin::GetFirstConnectedPin(const bool bFollowRerouteConnections) const {
    return NULL;
}

TArray<UMovieGraphNode*> UMovieGraphPin::GetConnectedNodes() const {
    return TArray<UMovieGraphNode*>();
}

TArray<UMovieGraphPin*> UMovieGraphPin::GetAllConnectedPins() const {
    return TArray<UMovieGraphPin*>();
}

int32 UMovieGraphPin::EdgeCount() const {
    return 0;
}

bool UMovieGraphPin::CanCreateConnection(const UMovieGraphPin* InOtherPin) const {
    return false;
}

bool UMovieGraphPin::AllowsMultipleConnections() const {
    return false;
}


