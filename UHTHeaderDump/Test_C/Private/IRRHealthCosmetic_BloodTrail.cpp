#include "IRRHealthCosmetic_BloodTrail.h"

UIRRHealthCosmetic_BloodTrail::UIRRHealthCosmetic_BloodTrail() {
    this->DropSpacing = 80.00f;
    this->SpacingJitter = 0.35f;
    this->StationaryDripInterval = 3.00f;
    this->LateralScatter = 15.00f;
    this->TraceDepth = 250.00f;
    this->TraceChannel = ECC_Visibility;
    this->DecalLifeSpan = 60.00f;
    this->FadeOutDuration = 5.00f;
    this->FadeScreenSize = 0.00f;
    this->MaxDecals = 40;
    this->MaxSpawnDistance = 5000.00f;
}


