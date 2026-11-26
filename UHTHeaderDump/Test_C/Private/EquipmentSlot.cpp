#include "EquipmentSlot.h"

FEquipmentSlot::FEquipmentSlot() {
    this->bUseMasterPose = false;
    this->bHideWhenUnequipped = false;
    this->bHideMesh = false;
    this->bUseHinge = false;
    this->HingeCollisionMesh = NULL;
    this->HingeSocket = NULL;
}

