#include "ItemSnapActor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneCaptureComponent2D -FallbackName=SceneCaptureComponent2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "DuplicateItemComponent.h"

AItemSnapActor::AItemSnapActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
    this->SceneComponent = (USceneComponent*)RootComponent;
    this->ItemRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ItemRootComponent"));
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    this->CaptureComponent = CreateDefaultSubobject<USceneCaptureComponent2D>(TEXT("Scene Capture Component"));
    this->FOV_Offset = 1.00f;
    this->FOV_OffsetPercent = 5.00f;
    this->bUseCustomRenderTarget = false;
    this->RenderTarget = NULL;
    this->FinishCaptureDelay = 0.10f;
    this->bShouldPrepareSnap = true;
    this->OwningInventoryComponent = NULL;
    this->DuplicateItemComp = CreateDefaultSubobject<UDuplicateItemComponent>(TEXT("DuplicateItemComponent"));
    this->bFullyStreamedIn = false;
    this->CaptureComponent->SetupAttachment(SpringArm);
    this->ItemRootComponent->SetupAttachment(RootComponent);
    this->SpringArm->SetupAttachment(RootComponent);
}

void AItemSnapActor::UpdateSnapActors() {
}

void AItemSnapActor::UpdateLocationOffset(FVector2D NewLocationOffset) {
}

void AItemSnapActor::UpdateLocationAndFOV(bool bLocation, bool bFOV) {
}

void AItemSnapActor::UpdateFOVOffset(float NewFOVOffset) {
}

bool AItemSnapActor::TexturesFullyStreamedIn() {
    return false;
}

void AItemSnapActor::SetLocation_Implementation(FVector2D NewLocation) {
}

void AItemSnapActor::SetFOV_Implementation(float NewFOV) {
}

void AItemSnapActor::RequestCaptureItem_Implementation(bool bLocation, bool bFOV) {
}

void AItemSnapActor::PrepareActor(AActor* ItemRef, bool bStart) {
}

void AItemSnapActor::InitItem(UInventoryComponent* NewOwningInventoryComponent, FContainerItem Item, UTexture*& NewTexture, FVector2D& NewRealWorldSize) {
}

void AItemSnapActor::FinishCaptureItem_Implementation() {
}


void AItemSnapActor::ClearItems() {
}


