#include "Timecode.h"

FTimecode::FTimecode() {
    this->Hours = 0;
    this->Minutes = 0;
    this->Seconds = 0;
    this->Frames = 0;
    this->SubFrame = 0.00f;
    this->bDropFrameFormat = false;
}

