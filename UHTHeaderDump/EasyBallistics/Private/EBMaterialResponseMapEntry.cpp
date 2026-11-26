#include "EBMaterialResponseMapEntry.h"

FEBMaterialResponseMapEntry::FEBMaterialResponseMapEntry() {
    this->PenTraceType = EPenTraceType::PT_BackTrace;
    this->NeverPenetrate = false;
    this->PenetrationDepthMultiplier = 0.00f;
    this->PenetrationNormalization = 0.00f;
    this->PenetrationNormalizationGrazing = 0.00f;
    this->PenetrationEntryAngleSpread = 0.00f;
    this->PenetrationExitAngleSpread = 0.00f;
    this->NeverRicochet = false;
    this->RicochetProbabilityMultiplier = 0.00f;
    this->RicochetRestitution = 0.00f;
    this->RicochetRestitutionInfluence = 0.00f;
    this->RicochetFriction = 0.00f;
    this->RicochetFrictionInfluence = 0.00f;
    this->RicochetSpread = 0.00f;
}

