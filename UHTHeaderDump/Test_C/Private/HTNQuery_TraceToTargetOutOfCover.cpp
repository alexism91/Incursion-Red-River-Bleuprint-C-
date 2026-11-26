#include "HTNQuery_TraceToTargetOutOfCover.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UHTNQuery_TraceToTargetOutOfCover::UHTNQuery_TraceToTargetOutOfCover() {
    this->FilterType = EEnvTestFilterType::Match;
    this->ScoringEquation = EEnvTestScoreEquation::Constant;
    this->TraceChannel = ECC_Visibility;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->Target = NULL;
    this->ForwardOffset = 30.00f;
    this->RightOffset = 80.00f;
    this->UpOffset = 70.00f;
    this->bDebug = false;
}


