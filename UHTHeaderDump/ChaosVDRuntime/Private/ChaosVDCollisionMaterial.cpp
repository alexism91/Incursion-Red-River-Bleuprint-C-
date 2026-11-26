#include "ChaosVDCollisionMaterial.h"

FChaosVDCollisionMaterial::FChaosVDCollisionMaterial() {
    this->FaceIndex = 0;
    this->MaterialDynamicFriction = 0.00f;
    this->MaterialStaticFriction = 0.00f;
    this->MaterialRestitution = 0.00f;
    this->DynamicFriction = 0.00f;
    this->StaticFriction = 0.00f;
    this->Restitution = 0.00f;
    this->RestitutionThreshold = 0.00f;
    this->InvMassScale0 = 0.00f;
    this->InvMassScale1 = 0.00f;
    this->InvInertiaScale0 = 0.00f;
    this->InvInertiaScale1 = 0.00f;
}

