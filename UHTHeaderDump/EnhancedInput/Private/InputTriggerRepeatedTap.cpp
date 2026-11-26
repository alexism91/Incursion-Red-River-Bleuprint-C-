#include "InputTriggerRepeatedTap.h"

UInputTriggerRepeatedTap::UInputTriggerRepeatedTap() {
    this->RepeatDelay = 0.50f;
    this->RepeatTime = 0.00f;
    this->NumberOfTapsWhichTriggerRepeat = 2;
    this->TapReleaseTimeThreshold = 0.20f;
    this->NumberOfTapsSinceLastTrigger = 0;
}


