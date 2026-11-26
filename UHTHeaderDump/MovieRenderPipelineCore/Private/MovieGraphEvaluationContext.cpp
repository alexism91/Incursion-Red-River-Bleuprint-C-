#include "MovieGraphEvaluationContext.h"

FMovieGraphEvaluationContext::FMovieGraphEvaluationContext() {
    this->PinBeingFollowed = NULL;
    this->bCircularGraphReferenceFound = false;
}

