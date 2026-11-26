#include "HTNTask_SwapWeaponSlot.h"

UHTNTask_SwapWeaponSlot::UHTNTask_SwapWeaponSlot() {
    this->NodeName = TEXT("Swap Weapon Slot");
    this->bEquipAnything = false;
    this->Slot = EIRRWeaponSlot::Primary;
    this->bKeepCurrentIfArmed = true;
    this->bEnsureChambered = true;
    this->bWaitForCompletion = true;
}


