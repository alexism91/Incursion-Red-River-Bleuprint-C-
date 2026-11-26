#include "LootPostProcessor_WeaponAttachmentBuild.h"

ULootPostProcessor_WeaponAttachmentBuild::ULootPostProcessor_WeaponAttachmentBuild() {
    this->bReplaceExistingAttachments = true;
    this->bForceRequiredAttachments = true;
    this->MinAttachmentDepth = 1;
    this->MaxAttachmentDepth = 2;
}


