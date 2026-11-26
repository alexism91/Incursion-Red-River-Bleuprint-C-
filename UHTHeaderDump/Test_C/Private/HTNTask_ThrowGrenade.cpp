#include "HTNTask_ThrowGrenade.h"

UHTNTask_ThrowGrenade::UHTNTask_ThrowGrenade() {
    this->NodeName = TEXT("Throw Grenade");
    this->bThrowAtActiveTarget = true;
    this->Style = EIRRGrenadeThrowStyle::Auto;
    this->bWaitForCompletion = true;
    this->PlanningCost = 100;
}


