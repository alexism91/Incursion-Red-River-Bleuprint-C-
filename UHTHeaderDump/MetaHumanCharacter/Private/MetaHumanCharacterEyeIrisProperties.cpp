#include "MetaHumanCharacterEyeIrisProperties.h"

FMetaHumanCharacterEyeIrisProperties::FMetaHumanCharacterEyeIrisProperties() {
    this->IrisPattern = EMetaHumanCharacterEyesIrisPattern::Iris001;
    this->IrisRotation = 0.00f;
    this->PrimaryColorU = 0.00f;
    this->PrimaryColorV = 0.00f;
    this->SecondaryColorU = 0.00f;
    this->SecondaryColorV = 0.00f;
    this->ColorBlend = 0.00f;
    this->ColorBlendSoftness = 0.00f;
    this->BlendMethod = EMetaHumanCharacterEyesBlendMethod::Radial;
    this->ShadowDetails = 0.00f;
    this->LimbalRingSize = 0.00f;
    this->LimbalRingSoftness = 0.00f;
    this->GlobalSaturation = 0.00f;
}

