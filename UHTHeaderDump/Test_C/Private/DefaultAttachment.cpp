#include "DefaultAttachment.h"

FDefaultAttachment::FDefaultAttachment() {
    this->InContainerIndex = 0;
    this->ParentIndex = 0;
    this->AttachmentType = EDefaultItemType::Preset;
    this->AttachmentPreset = NULL;
    this->AttachmentDefinition = NULL;
    this->Count = 0;
    this->SlotIndex = 0;
    this->bRotated = false;
}

