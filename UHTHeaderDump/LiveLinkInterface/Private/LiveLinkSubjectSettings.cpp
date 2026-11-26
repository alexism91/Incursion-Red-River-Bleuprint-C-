#include "LiveLinkSubjectSettings.h"

ULiveLinkSubjectSettings::ULiveLinkSubjectSettings() {
    this->InterpolationProcessor = NULL;
    this->Remapper = NULL;
    this->Role = NULL;
    this->bRebroadcastSubject = false;
    this->bAllowModifyingRebroadcast = true;
}


