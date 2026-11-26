#include "AttachmentComponent.h"

UAttachmentComponent::UAttachmentComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Weapon = NULL;
}

void UAttachmentComponent::DetachFromWeapon() {
}

void UAttachmentComponent::AttachToWeapon(UWeaponComponent* NewWeapon) {
}


