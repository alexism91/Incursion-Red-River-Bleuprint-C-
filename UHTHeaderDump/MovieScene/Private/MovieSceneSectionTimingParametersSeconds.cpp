#include "MovieSceneSectionTimingParametersSeconds.h"

FMovieSceneSectionTimingParametersSeconds::FMovieSceneSectionTimingParametersSeconds() {
    this->InnerStartOffset = 0.00f;
    this->InnerEndOffset = 0.00f;
    this->FirstLoopStartOffset = 0.00f;
    this->bLoop = false;
    this->bClamp = false;
    this->bReverse = false;
}

