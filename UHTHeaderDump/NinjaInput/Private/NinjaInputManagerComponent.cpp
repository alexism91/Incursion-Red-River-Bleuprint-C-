#include "NinjaInputManagerComponent.h"

UNinjaInputManagerComponent::UNinjaInputManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InputComponent = NULL;
    this->OwnerController = NULL;
    this->ForwardReference = NULL;
}

void UNinjaInputManagerComponent::Server_SendGameplayEventToOwner_Implementation(const FGameplayTag& GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction) const {
}

int32 UNinjaInputManagerComponent::SendGameplayEventToOwner(const FGameplayTag& GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction, bool bSendLocally, bool bSendToServer) const {
    return 0;
}

void UNinjaInputManagerComponent::RemoveInputSetupData(const UNinjaInputSetupDataAsset* SetupData) {
}

void UNinjaInputManagerComponent::OnPawnRestarted(APawn* Pawn) {
}

void UNinjaInputManagerComponent::OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

bool UNinjaInputManagerComponent::IsLocallyControlled() const {
    return false;
}

bool UNinjaInputManagerComponent::HasSetupData(const UNinjaInputSetupDataAsset* SetupData) const {
    return false;
}

bool UNinjaInputManagerComponent::HasInputMappingContext(const UInputMappingContext* InputMappingContext) const {
    return false;
}

bool UNinjaInputManagerComponent::HasCompatibleInputHandler(const UInputAction* InputAction, const ETriggerEvent& TriggerEvent) const {
    return false;
}

void UNinjaInputManagerComponent::GetVectorForAxis_Implementation(const TEnumAsByte<EAxis::Type> Axis, FVector& OutReference) const {
}

FVector UNinjaInputManagerComponent::GetRightVector_Implementation() const {
    return FVector{};
}

APawn* UNinjaInputManagerComponent::GetPawn() const {
    return NULL;
}

FVector2D UNinjaInputManagerComponent::GetMovementInput() const {
    return FVector2D{};
}

FVector2D UNinjaInputManagerComponent::GetLookInput() const {
    return FVector2D{};
}

FVector UNinjaInputManagerComponent::GetLastInputVector() const {
    return FVector{};
}

FVector UNinjaInputManagerComponent::GetForwardVector_Implementation() const {
    return FVector{};
}

UEnhancedInputLocalPlayerSubsystem* UNinjaInputManagerComponent::GetEnhancedInputSubsystem(AController* Controller) const {
    return NULL;
}

AController* UNinjaInputManagerComponent::GetController() const {
    return NULL;
}

UAbilitySystemComponent* UNinjaInputManagerComponent::GetAbilitySystemComponent() const {
    return NULL;
}

void UNinjaInputManagerComponent::DispatchTriggeredEvent(const FInputActionInstance& ActionInstance) {
}

void UNinjaInputManagerComponent::DispatchStartedEvent(const FInputActionInstance& ActionInstance) {
}

void UNinjaInputManagerComponent::DispatchOngoingEvent(const FInputActionInstance& ActionInstance) {
}

void UNinjaInputManagerComponent::DispatchCompletedEvent(const FInputActionInstance& ActionInstance) {
}

void UNinjaInputManagerComponent::DispatchCancelledEvent(const FInputActionInstance& ActionInstance) {
}

void UNinjaInputManagerComponent::Client_SendGameplayEventToOwner_Implementation(const FGameplayTag& GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction) const {
}

void UNinjaInputManagerComponent::AddInputSetupData(const UNinjaInputSetupDataAsset* SetupData) {
}


