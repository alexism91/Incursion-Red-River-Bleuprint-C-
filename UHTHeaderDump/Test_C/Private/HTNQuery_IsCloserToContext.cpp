#include "HTNQuery_IsCloserToContext.h"

UHTNQuery_IsCloserToContext::UHTNQuery_IsCloserToContext() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->Target = NULL;
}


