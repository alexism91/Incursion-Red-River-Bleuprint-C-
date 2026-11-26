#include "EnvQueryTest_ProvidesCover.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_ProvidesCover::UEnvQueryTest_ProvidesCover() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TraceChannel = ECC_Visibility;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


