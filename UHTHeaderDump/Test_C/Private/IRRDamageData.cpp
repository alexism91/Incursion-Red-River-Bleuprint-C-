#include "IRRDamageData.h"

FIRRDamageData::FIRRDamageData() {
    this->DamageInstigator = NULL;
    this->DamageCauser = NULL;
    this->DamageItemDefinition = NULL;
    this->AmmoItemDefinition = NULL;
    this->DamageType = NULL;
    this->ImpactBodyPart = EIRRBodyPart::Head;
    this->DamageTime = 0.00f;
    this->Damage = 0.00f;
}

