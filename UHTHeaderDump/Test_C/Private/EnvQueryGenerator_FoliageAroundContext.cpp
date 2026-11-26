#include "EnvQueryGenerator_FoliageAroundContext.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Point -FallbackName=EnvQueryItemType_Point

UEnvQueryGenerator_FoliageAroundContext::UEnvQueryGenerator_FoliageAroundContext() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->Context = UEnvQueryContext_Querier::StaticClass();
}


