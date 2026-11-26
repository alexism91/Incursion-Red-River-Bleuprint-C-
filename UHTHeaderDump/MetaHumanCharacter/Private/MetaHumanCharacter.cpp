#include "MetaHumanCharacter.h"

UMetaHumanCharacter::UMetaHumanCharacter() {
    this->TemplateType = EMetaHumanCharacterTemplateType::MetaHuman;
    this->bHasHighResolutionTextures = false;
    this->bFixedBodyType = false;
    this->InternalCollection = NULL;
    this->bHasFaceDNABlendshapes = false;
}


