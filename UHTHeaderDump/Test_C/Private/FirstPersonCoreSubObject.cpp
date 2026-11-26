#include "FirstPersonCoreSubObject.h"

UFirstPersonCoreSubObject::UFirstPersonCoreSubObject() {
    this->bOnlyLocally = true;
    this->bTickEnabled = true;
    this->bUseCustomTickRate = false;
    this->CustomTickRate = 0.20f;
    this->InventoryComponent = NULL;
    this->GameplayTagsComponent = NULL;
    this->InputManagerComponent = NULL;
    this->Character = NULL;
    this->EquippableComponent = NULL;
}

void UFirstPersonCoreSubObject::UpdateEquippableComponent(UEquippableComponent* NewEquippableComponent) {
}

void UFirstPersonCoreSubObject::Tick(float DeltaTime) {
}



void UFirstPersonCoreSubObject::InitFirstPersonCoreSubObject(UInventoryComponent* OwnerInventoryComponent, UGameplayTagsComponent* OwningGameplayTagsComponent, UNinjaInputManagerComponent* OwningInputManagerComponent, ACharacter* OwningCharacter) {
}

AActor* UFirstPersonCoreSubObject::GetOwningActor() const {
    return NULL;
}


