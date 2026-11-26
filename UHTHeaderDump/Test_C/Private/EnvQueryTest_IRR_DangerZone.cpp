#include "EnvQueryTest_IRR_DangerZone.h"

UEnvQueryTest_IRR_DangerZone::UEnvQueryTest_IRR_DangerZone() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->bWantInDangerZone = false;
}


