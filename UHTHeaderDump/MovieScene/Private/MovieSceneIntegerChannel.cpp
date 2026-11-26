#include "MovieSceneIntegerChannel.h"

FMovieSceneIntegerChannel::FMovieSceneIntegerChannel() {
    this->PreInfinityExtrap = RCCE_Cycle;
    this->PostInfinityExtrap = RCCE_Cycle;
    this->bInterpolateLinearKeys = false;
    this->DefaultValue = 0;
    this->bHasDefaultValue = false;
}

