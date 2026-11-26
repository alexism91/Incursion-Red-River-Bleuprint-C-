#include "AudioVectorscope.h"

UAudioVectorscope::UAudioVectorscope() {
    this->AudioBus = NULL;
    this->bShowGrid = true;
    this->GridDivisions = 2;
    this->MaxDisplayPersistenceMs = 500.00f;
    this->DisplayPersistenceMs = 60.00f;
    this->Scale = 1.00f;
    this->PanelLayoutType = EAudioPanelLayoutType::Basic;
}

void UAudioVectorscope::StopProcessing() {
}

void UAudioVectorscope::StartProcessing() {
}


