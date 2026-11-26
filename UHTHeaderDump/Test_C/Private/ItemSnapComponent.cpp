#include "ItemSnapComponent.h"

UItemSnapComponent::UItemSnapComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ItemSnapActorClass = NULL;
    this->PoolLimit = 200;
    this->ItemSnapTickRate = 0.01f;
    this->CaptureTimeout = 5.00f;
    this->ItemSnapActor = NULL;
    this->ActiveWidget = NULL;
    this->ActiveTexture = NULL;
    this->ItemInspectRenderTargetIndex = 0;
    this->ItemSnapRenderTargetIndex = 0;
}

void UItemSnapComponent::StoreItemSnap(FGuid ItemUID, FItemSnap ItemSnap) {
}

void UItemSnapComponent::RequestSnap_Implementation(UUserWidget* ItemRef, bool bIsUpdated) {
}

void UItemSnapComponent::RemoveItemSnap(FGuid ItemUID) {
}

void UItemSnapComponent::PreloadItem(FContainerItem Item) {
}

void UItemSnapComponent::OnCaptureItemFinished() {
}

void UItemSnapComponent::HandleQueue_Implementation() {
}

UTextureRenderTarget2D* UItemSnapComponent::GetRenderTarget(AActor* SnapActor) {
    return NULL;
}

UTextureRenderTarget2D* UItemSnapComponent::CreateRenderTarget(const UObject* WorldContextObject, FIntPoint InItemSnapRenderTargetSize) {
    return NULL;
}


