#include "IRRAcousticEnvironmentSubsystem.h"

UIRRAcousticEnvironmentSubsystem::UIRRAcousticEnvironmentSubsystem() {
    this->OutdoorsAmbience = NULL;
}

void UIRRAcousticEnvironmentSubsystem::SetLevelAcousticEnvironment(const UObject* WorldContextObject, EIRRAcousticEnvironment ExteriorEnvironment, FAkOutdoorsRoomParameters OutdoorsRoomParameters, UAkAudioEvent* NewOutdoorsAmbience) {
}

EIRRAcousticEnvironment UIRRAcousticEnvironmentSubsystem::GetExteriorEnvironment() const {
    return EIRRAcousticEnvironment::ExteriorField;
}


