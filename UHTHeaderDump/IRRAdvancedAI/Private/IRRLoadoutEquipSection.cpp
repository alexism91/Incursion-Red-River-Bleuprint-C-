#include "IRRLoadoutEquipSection.h"

FIRRLoadoutEquipSection::FIRRLoadoutEquipSection() {
    this->ContainerIndex = 0;
    this->Mode = EIRRLoadoutPoolMode::WeightedList;
    this->GenerationChance = 0.00f;
    this->FallbackAttachmentMinDepth = 0;
    this->FallbackAttachmentMaxDepth = 0;
    this->bReceiveWeaponMags = false;
}

