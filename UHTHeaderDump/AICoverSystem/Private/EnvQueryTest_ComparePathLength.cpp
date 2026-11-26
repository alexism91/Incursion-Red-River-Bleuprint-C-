#include "EnvQueryTest_ComparePathLength.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryTest_ComparePathLength::UEnvQueryTest_ComparePathLength() {
    this->TestPurpose = EEnvTestPurpose::Filter;
    this->FilterType = EEnvTestFilterType::Minimum;
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


