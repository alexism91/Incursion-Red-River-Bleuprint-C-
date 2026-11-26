#include "EnvQueryGenerator_IRR_NavAreaGrid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryContext_Querier -FallbackName=EnvQueryContext_Querier
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryItemType_Point -FallbackName=EnvQueryItemType_Point

UEnvQueryGenerator_IRR_NavAreaGrid::UEnvQueryGenerator_IRR_NavAreaGrid() {
    this->ItemType = UEnvQueryItemType_Point::StaticClass();
    this->GenerateAround = UEnvQueryContext_Querier::StaticClass();
    this->FilterClass = NULL;
}


