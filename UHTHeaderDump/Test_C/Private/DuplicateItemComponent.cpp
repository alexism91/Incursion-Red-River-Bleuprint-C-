#include "DuplicateItemComponent.h"
#include "Templates/SubclassOf.h"

UDuplicateItemComponent::UDuplicateItemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = NULL;
    this->ItemOwningComp = NULL;
}

void UDuplicateItemComponent::UpdateItem(FContainerItem Item) {
}

AActor* UDuplicateItemComponent::SpawnAttachment(TSubclassOf<AActor> Class, AActor* ParentActor, FName AttachmentSocket) {
    return NULL;
}

void UDuplicateItemComponent::SetRootComponent(USceneComponent* NewRootComponent) {
}

bool UDuplicateItemComponent::RemoveAttachment(FGuid AttachmentUID) {
    return false;
}

void UDuplicateItemComponent::InitDuplicateItem(FContainerItem NewItemToDuplicate, UInventoryComponent* NewItemOwningComp) {
}

void UDuplicateItemComponent::HandleChildAttachments(FGuid AttachmentUID, bool bAdd) {
}

TArray<FDuplicateContainerItem> UDuplicateItemComponent::GetDuplicatedItems() {
    return TArray<FDuplicateContainerItem>();
}

TArray<AActor*> UDuplicateItemComponent::GetDuplicatedActors() {
    return TArray<AActor*>();
}

AActor* UDuplicateItemComponent::GetDuplicateActorByUID(FGuid ItemUID) {
    return NULL;
}

void UDuplicateItemComponent::GetCaptureInformation(FVector2D& RealWorldSize, FVector2D& Offset, float& FOV, float CameraDistance) {
}

void UDuplicateItemComponent::ClearDuplicateItem() {
}

bool UDuplicateItemComponent::AddAttachment(FMainContainer MainContainer, FContainerItem Item) {
    return false;
}


