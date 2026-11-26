#include "UPSEnemyPointActionComponent.h"

UUPSEnemyPointActionComponent::UUPSEnemyPointActionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CharacterOnPoint = NULL;
    this->PreviewAnim = NULL;
    this->PreviewAnimStartTime = 0.00f;
    this->ArrowSize = 1.00f;
    this->ArrowOffset = 50.00f;
    this->BillboardSize = 2.00f;
    this->bOverrideProjectSettingsMesh = false;
    this->bOverrideProjectSettingsMaterial = false;
    this->bOverrideProjectSettingsSprite = false;
    this->OverrideEnemyActionPointComponentMesh = NULL;
    this->OverrideEnemyActionPointComponentMeshMaterial = NULL;
    this->OverrideEnemyActionPointComponentBillboardSprite = NULL;
}

void UUPSEnemyPointActionComponent::SetPreviewAnim(UAnimationAsset* Anim, float InitTime) {
}

void UUPSEnemyPointActionComponent::SetCharacterOnPoint(ACharacter* Character) {
}


ACharacter* UUPSEnemyPointActionComponent::GetCharacterOnPoint() const {
    return NULL;
}


