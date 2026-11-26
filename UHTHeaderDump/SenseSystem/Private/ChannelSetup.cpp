#include "ChannelSetup.h"

FChannelSetup::FChannelSetup() {
    this->Channel = 0;
    this->bNewSenseForcedByBestScore = false;
    this->TrackBestScoreCount = 0;
    this->MinBestScore = 0.00f;
}

