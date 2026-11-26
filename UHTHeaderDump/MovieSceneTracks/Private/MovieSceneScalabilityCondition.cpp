#include "MovieSceneScalabilityCondition.h"

UMovieSceneScalabilityCondition::UMovieSceneScalabilityCondition() {
    this->Group = EMovieSceneScalabilityConditionGroup::ViewDistance;
    this->Operator = EMovieSceneScalabilityConditionOperator::LessThan;
    this->Level = EMovieSceneScalabilityConditionLevel::Low;
}


