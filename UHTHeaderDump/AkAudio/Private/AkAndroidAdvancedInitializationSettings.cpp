#include "AkAndroidAdvancedInitializationSettings.h"

FAkAndroidAdvancedInitializationSettings::FAkAndroidAdvancedInitializationSettings() {
    this->AudioAPI = 0;
    this->SpatializerAPI = 0;
    this->AudioPath = EAkAndroidAudioPath::Legacy;
    this->RoundFrameSizeToHardwareSize = false;
    this->UseLowLatencyMode = false;
    this->bVerboseSink = false;
}

