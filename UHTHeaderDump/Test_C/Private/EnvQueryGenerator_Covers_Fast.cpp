#include "EnvQueryGenerator_Covers_Fast.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier

UEnvQueryGenerator_Covers_Fast::UEnvQueryGenerator_Covers_Fast() {
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
}


