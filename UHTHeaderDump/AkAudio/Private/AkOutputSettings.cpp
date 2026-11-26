#include "AkOutputSettings.h"

FAkOutputSettings::FAkOutputSettings() {
    this->AudioDeviceShareSet = NULL;
    this->IdDevice = 0;
    this->PanRule = EPanningRule::PanningRule_Speakers;
    this->ChannelConfig = EAkChannelConfiguration::Ak_Parent;
}

