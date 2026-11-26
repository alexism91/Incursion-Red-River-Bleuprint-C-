#include "HTNDecorator_Cooldown.h"

UHTNDecorator_Cooldown::UHTNDecorator_Cooldown() {
    this->bLockCooldown = true;
    this->bLockEvenIfExecutionAborted = true;
    this->CooldownDuration = 5.00f;
    this->RandomDeviation = 0.00f;
}


