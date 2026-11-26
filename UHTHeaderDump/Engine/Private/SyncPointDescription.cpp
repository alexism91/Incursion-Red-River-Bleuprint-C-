#include "SyncPointDescription.h"

FSyncPointDescription::FSyncPointDescription() {
    this->EventType = ESyncPointEventType::Invalid;
    this->ActivationRules = ESyncPointActivationRules::Invalid;
    this->FirstPossibleTickGroup = TG_PrePhysics;
    this->LastPossibleTickGroup = TG_PrePhysics;
}

