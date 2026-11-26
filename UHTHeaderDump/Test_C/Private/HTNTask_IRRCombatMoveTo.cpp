#include "HTNTask_IRRCombatMoveTo.h"

UHTNTask_IRRCombatMoveTo::UHTNTask_IRRCombatMoveTo() {
    this->NodeName = TEXT("Combat Move To");
    this->bAllowPartialPath = true;
    this->bAutoCrouch = true;
    this->HeightThresholdReloading = 80.00f;
    this->HeightThreshold = 120.00f;
    this->bDrawDebug = false;
}


