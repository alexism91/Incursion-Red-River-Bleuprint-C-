#include "IRRHealthCosmetic_Symptom.h"

UIRRHealthCosmetic_Symptom::UIRRHealthCosmetic_Symptom() {
    this->ClipIntensity = 1.00f;
    this->ClipPlayRate = 1.00f;
    this->SoundEvent = NULL;
    this->bSoundForLocalPlayer = true;
    this->bSoundForObservers = true;
    this->MinInterval = 4.00f;
    this->MaxInterval = 9.00f;
    this->bPlayOnActivate = false;
    this->bRequireMovement = true;
    this->MinMoveSpeed = 50.00f;
    this->PlayingMontage = NULL;
}

void UIRRHealthCosmetic_Symptom::PlaySymptom() {
}



