#include "HTNService_ReplanSearchOnSight.h"

UHTNService_ReplanSearchOnSight::UHTNService_ReplanSearchOnSight() {
    this->NodeName = TEXT("Replan Search On Sight");
    this->bReplanOnAnyTargetVisible = true;
    this->bReplanOnLastKnownInSight = true;
}


