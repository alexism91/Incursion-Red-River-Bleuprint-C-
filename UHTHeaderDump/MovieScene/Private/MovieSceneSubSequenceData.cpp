#include "MovieSceneSubSequenceData.h"

FMovieSceneSubSequenceData::FMovieSceneSubSequenceData() {
    this->HierarchicalBias = 0;
    this->AccumulatedFlags = EMovieSceneSubSectionFlags::None;
    this->bCanLoop = false;
}

