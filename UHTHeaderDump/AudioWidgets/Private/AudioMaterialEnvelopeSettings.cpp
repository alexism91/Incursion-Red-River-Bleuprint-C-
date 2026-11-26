#include "AudioMaterialEnvelopeSettings.h"

FAudioMaterialEnvelopeSettings::FAudioMaterialEnvelopeSettings() {
    this->EnvelopeType = EAudioMaterialEnvelopeType::AD;
    this->AttackCurve = 0.00f;
    this->AttackValue = 0.00f;
    this->AttackTime = 0.00f;
    this->DecayCurve = 0.00f;
    this->DecayTime = 0.00f;
    this->SustainValue = 0.00f;
    this->ReleaseCurve = 0.00f;
    this->ReleaseTime = 0.00f;
}

