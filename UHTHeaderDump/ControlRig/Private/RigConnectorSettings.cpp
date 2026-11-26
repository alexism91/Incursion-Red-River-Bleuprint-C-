#include "RigConnectorSettings.h"

FRigConnectorSettings::FRigConnectorSettings() {
    this->Type = EConnectorType::Primary;
    this->bOptional = false;
    this->bIsArray = false;
}

