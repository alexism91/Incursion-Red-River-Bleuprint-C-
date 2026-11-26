#include "AdvancedAudioSettings.h"

UAdvancedAudioSettings::UAdvancedAudioSettings() {
    this->bTickPortals = true;
    this->bTickLateReverb = false;
    this->bTickRoom = true;
    this->bTickSurfaceReflector = false;
    this->DefaultPortalSignificanceRange = 4000.00f;
    this->DefaultSpatialVolumeSignificanceRange = 4000.00f;
    this->DefaultExteriorEnvironment = EIRRAcousticEnvironment::ExteriorField;
    this->SmallInteriorMaxVolumeM3 = 80.00f;
    this->MediumInteriorMaxVolumeM3 = 500.00f;
    this->DefaultOutdoorsReverbLevel = 1.00f;
    this->DefaultOutdoorsTransmissionLoss = 0.00f;
    this->DefaultOutdoorsAuxSendLevel = 0.00f;
    this->bVoiceChatEnabled = true;
    this->VoiceChatAccessKey = TEXT("AX90sJbnsG8Y/5RizI9CUhMArwxGDViyaaSq6RXcoikZ");
    this->VoiceChatGatewayUrl = TEXT("https://gateway.odin.4players.io");
    this->VoiceChatRoomIdPrefix = TEXT("IRR_");
    this->bEchoCancellation = true;
    this->bHighPassFilter = true;
    this->bAutoGainControl = true;
    this->bNoiseSuppression = true;
    this->bVoiceIsolation = false;
    this->bVoiceActivityDetection = true;
    this->InputSensitivityDb = -50.00f;
    this->bDefaultPushToTalk = true;
    this->VoiceAttenuationScalingFactor = 1.00f;
}


