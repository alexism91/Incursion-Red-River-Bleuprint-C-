#include "IRRDesignationConfig.h"

FIRRDesignationConfig::FIRRDesignationConfig() {
    this->InitialMarkDwell = 0.00f;
    this->ConfirmMarkDwell = 0.00f;
    this->LaseGracePeriod = 0.00f;
    this->DwellDecayRate = 0.00f;
    this->ConfirmWindowDelayMin = 0.00f;
    this->ConfirmWindowDelayMax = 0.00f;
    this->ConfirmWindowDuration = 0.00f;
    this->MissionCooldown = 0.00f;
    this->HandlerFollowUpDelay = 0.00f;
    this->bRequireAiming = false;
    this->MinimumSafeDistance = 0.00f;
    this->DangerCloseBeatInterval = 0.00f;
}

