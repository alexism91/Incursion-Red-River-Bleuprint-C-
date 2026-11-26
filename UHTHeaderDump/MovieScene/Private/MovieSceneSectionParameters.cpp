#include "MovieSceneSectionParameters.h"

FMovieSceneSectionParameters::FMovieSceneSectionParameters() {
    this->bCanLoop = false;
    this->HierarchicalBias = 0;
    this->Flags = EMovieSceneSubSectionFlags::None;
    this->StartOffset = 0.00f;
    this->PrerollTime = 0.00f;
    this->PostrollTime = 0.00f;
}

