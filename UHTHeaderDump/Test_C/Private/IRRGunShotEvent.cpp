#include "IRRGunShotEvent.h"

FIRRGunShotEvent::FIRRGunShotEvent() {
    this->bBulletImpacted = false;
    this->Bullet = NULL;
    this->Instigator = NULL;
    this->Weapon = NULL;
    this->TimeOccurred = 0.00f;
}

