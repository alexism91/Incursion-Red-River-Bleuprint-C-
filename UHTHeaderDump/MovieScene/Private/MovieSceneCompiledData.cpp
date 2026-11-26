#include "MovieSceneCompiledData.h"

UMovieSceneCompiledData::UMovieSceneCompiledData() {
    this->AccumulatedMask = EMovieSceneSequenceCompilerMask::None;
    this->AllocatedMask = EMovieSceneSequenceCompilerMask::None;
    this->AccumulatedFlags = EMovieSceneSequenceFlags::None;
}


