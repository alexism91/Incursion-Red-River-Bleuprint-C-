#include "EquippableBaseAnimationSettings.h"

FEquippableBaseAnimationSettings::FEquippableBaseAnimationSettings() {
    this->IdleAnimation = NULL;
    this->ADSAnimation = NULL;
    this->RunAnimation = NULL;
    this->SprintAnimation = NULL;
    this->ExtraAnimBlueprint = NULL;
    this->RunAnimationPlayRate = 0.00f;
    this->SprintAnimationPlayRate = 0.00f;
    this->bUseWeaponClipping = false;
    this->bUseViewmodelOffset = false;
}

