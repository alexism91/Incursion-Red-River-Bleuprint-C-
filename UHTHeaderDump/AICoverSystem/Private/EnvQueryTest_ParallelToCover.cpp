#include "EnvQueryTest_ParallelToCover.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_ParallelToCover::UEnvQueryTest_ParallelToCover() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Minimum;
    this->Context = UEnvQueryContext_Querier::StaticClass();
    this->TestMode = EEnvTestParallerCover::Dot2D;
}


