#include "IRRRagdollCollisionSettings.h"

FIRRRagdollCollisionSettings::FIRRRagdollCollisionSettings() {
    this->RagdollCollisionEnabled = ECollisionEnabled::NoCollision;
    this->RagdollCollisionChannel = ECC_WorldStatic;
    this->RagdollEndCollisionEnabled = ECollisionEnabled::NoCollision;
    this->RagdollEndCollisionChannel = ECC_WorldStatic;
}

