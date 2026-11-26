#include "MovieSceneCondition.h"

UMovieSceneCondition::UMovieSceneCondition() {
    this->bInvert = false;
}

EMovieSceneConditionScope UMovieSceneCondition::BP_GetScope_Implementation() const {
    return EMovieSceneConditionScope::Global;
}

EMovieSceneConditionCheckFrequency UMovieSceneCondition::BP_GetCheckFrequency_Implementation() const {
    return EMovieSceneConditionCheckFrequency::Once;
}



