#include "MovieSceneBoolChannel.h"

FMovieSceneBoolChannel::FMovieSceneBoolChannel() {
    this->PreInfinityExtrap = RCCE_Cycle;
    this->PostInfinityExtrap = RCCE_Cycle;
    this->DefaultValue = false;
    this->bHasDefaultValue = false;
}

