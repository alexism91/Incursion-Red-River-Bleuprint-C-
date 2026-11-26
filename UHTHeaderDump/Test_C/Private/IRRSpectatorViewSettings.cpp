#include "IRRSpectatorViewSettings.h"

FIRRSpectatorViewSettings::FIRRSpectatorViewSettings() {
    this->bLockPitch = false;
    this->bLockYaw = false;
    this->bLockRoll = false;
    this->HelmetMountDistance = 0.00f;
    this->HelmetMountAngleDegrees = 0.00f;
    this->HelmetForwardOffset = 0.00f;
    this->bAutoClearHeadgear = false;
    this->HeadgearSearchRadius = 0.00f;
    this->HeadgearMaxRadius = 0.00f;
    this->DefaultHeadRadius = 0.00f;
    this->bForceFullAnimTick = false;
    this->bAutoSwapOnDeath = false;
    this->bAutoSwapAcrossFactions = false;
    this->ChaseDistance = 0.00f;
    this->ChaseHeight = 0.00f;
    this->FOV = 0.00f;
    this->BlendTime = 0.00f;
}

