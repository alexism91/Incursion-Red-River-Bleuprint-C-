#include "InteractionTarget.h"
#include "Net/UnrealNetwork.h"

UInteractionTarget::UInteractionTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TargetMarker = NULL;
    this->WidgetComponent = NULL;
    this->bEnabled = true;
    this->TargetWidgetClass = NULL;
    this->MarkerSocketName = TEXT("Root");
    this->OuterInteractionRadius = 350.00f;
    this->InnerInteractionRadius = 250.00f;
    this->InteractionState = EInteractionState::NONE;
    this->ActiveInteractionOption = NULL;
    this->DisabledInteractionOption = NULL;
    this->LocInteractingActor = NULL;
    this->SphereComponent = NULL;
    this->bShareCollision = false;
    this->TabCount = 0;
    this->InteractingActorCounter = 0;
    this->ExclusiveInteractor = NULL;
    this->PredictedInteractor = NULL;
    this->InProgressInteractor = NULL;
}

void UInteractionTarget::UpdateMarker() {
}

bool UInteractionTarget::UpdateInteractionTarget(APlayerController* Player) {
    return false;
}

void UInteractionTarget::UpdateInteractionState(EInteractionState NewState) {
}

void UInteractionTarget::UpdateInteractionProgress() {
}

void UInteractionTarget::UpdateInteractingActorCounter_Implementation(bool bIncrement) {
}

void UInteractionTarget::UpdateCollision(bool bEnableCollision) {
}

void UInteractionTarget::ToggleInteractionTarget(bool Activate) {
}

void UInteractionTarget::StartInteraction_Delayed(AActor* Player) {
}

bool UInteractionTarget::StartInteraction(AActor* Player) {
    return false;
}

void UInteractionTarget::SimulateInteraction(AActor* Player) {
}

void UInteractionTarget::SimulateBeginOverlap(AActor* OtherActor) {
}

void UInteractionTarget::SetupWidgetComponent() {
}

void UInteractionTarget::RemoveInteractionTarget() {
}

void UInteractionTarget::OnRep_Enabled() {
}

void UInteractionTarget::OnRep_ActiveInteractors() {
}

void UInteractionTarget::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UInteractionTarget::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UInteractionTarget::OnActiveInteractorDestroyed(AActor* DestroyedActor) {
}

bool UInteractionTarget::IsInteractionInProgress() const {
    return false;
}

UWidgetComponent* UInteractionTarget::GetWidgetComponent() const {
    return NULL;
}

FVector UInteractionTarget::GetMarkerPosition() {
    return FVector{};
}

EInteractionState UInteractionTarget::GetInteractionState() {
    return EInteractionState::NONE;
}

UInteractionOption* UInteractionTarget::GetInteractionOption() {
    return NULL;
}

float UInteractionTarget::GetInnerInteractionRadius() {
    return 0.0f;
}

void UInteractionTarget::FinishInteraction_Ongoing(bool success) {
}

void UInteractionTarget::FinishInteraction(bool bSuccess) {
}

void UInteractionTarget::AddInteractionTarget_Implementation() {
}

void UInteractionTarget::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInteractionTarget, bEnabled);
    DOREPLIFETIME(UInteractionTarget, InteractingActorCounter);
    DOREPLIFETIME(UInteractionTarget, ExclusiveInteractor);
    DOREPLIFETIME(UInteractionTarget, ActiveInteractors);
}


