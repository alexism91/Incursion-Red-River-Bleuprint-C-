#include "FirstPersonWeaponClipping.h"

UFirstPersonWeaponClipping::UFirstPersonWeaponClipping() {
    this->BoneNameToCheck = TEXT("VB Root");
    this->bTraceComplex = true;
    this->WeaponBlockAlpha = 0.00f;
    this->ClippingDistance = 0.00f;
}


