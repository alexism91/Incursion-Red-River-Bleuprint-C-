#include "EnvQueryGenerator_PathablePoints.h"
#include "EnvQueryContext_IRR_TargetLastKnownLocation.h"

UEnvQueryGenerator_PathablePoints::UEnvQueryGenerator_PathablePoints() {
    this->TargetContext = UEnvQueryContext_IRR_TargetLastKnownLocation::StaticClass();
    this->FilterClass = NULL;
}


