#include "MovieGraphPinProperties.h"

FMovieGraphPinProperties::FMovieGraphPinProperties() {
    this->Type = EMovieGraphValueType::None;
    this->TypeObject = NULL;
    this->bAllowMultipleConnections = false;
    this->bIsBranch = false;
    this->bIsWildcard = false;
    this->bIsBuiltIn = false;
}

