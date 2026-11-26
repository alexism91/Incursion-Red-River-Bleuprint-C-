#include "MovieSceneByteChannel.h"

FMovieSceneByteChannel::FMovieSceneByteChannel() {
    this->PreInfinityExtrap = RCCE_Cycle;
    this->PostInfinityExtrap = RCCE_Cycle;
    this->DefaultValue = 0;
    this->bHasDefaultValue = false;
    this->Enum = NULL;
}

