#include "MovieSceneDirectorBlueprintCondition.h"

UMovieSceneDirectorBlueprintCondition::UMovieSceneDirectorBlueprintCondition() {
    this->Scope = EMovieSceneConditionScope::Global;
    this->CheckFrequency = EMovieSceneConditionCheckFrequency::Once;
}


