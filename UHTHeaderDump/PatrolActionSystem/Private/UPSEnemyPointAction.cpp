#include "UPSEnemyPointAction.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "UPSEnemyPointActionComponent.h"
#include "UPSMovementHandlerDefault.h"

AUPSEnemyPointAction::AUPSEnemyPointAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->DefaultEnemyPointActionComponent = CreateDefaultSubobject<UUPSEnemyPointActionComponent>(TEXT("DefaultEnemyActionPointComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->MovementHandlerClass = AUPSMovementHandlerDefault::StaticClass();
    this->bFinishActionAfterCharacterAbort = true;
    this->DefaultEnemyPointActionComponent->SetupAttachment(RootComponent);
}

bool AUPSEnemyPointAction::StartEnemyPointAction(FOnEnemyPointActionFinished OnPointActionFinishedCallback, ACharacter* Character) {
    return false;
}

void AUPSEnemyPointAction::OnCharacterReachPoint(ACharacter* Character, bool bSuccess) {
}

void AUPSEnemyPointAction::OnCharacterDestroyed(AActor* DestroyedActor) {
}







bool AUPSEnemyPointAction::HasFreePointComponent() const {
    return false;
}

UUPSEnemyPointActionComponent* AUPSEnemyPointAction::GetFreeEnemyActionPointComponent(ACharacter* Character) const {
    return NULL;
}

TArray<UUPSEnemyPointActionComponent*> AUPSEnemyPointAction::GetEnemyActionPointComponents() const {
    return TArray<UUPSEnemyPointActionComponent*>();
}

TArray<ACharacter*> AUPSEnemyPointAction::GetCharactersStartedPointAction() const {
    return TArray<ACharacter*>();
}

TArray<ACharacter*> AUPSEnemyPointAction::GetCharactersReachedPoints() const {
    return TArray<ACharacter*>();
}

TArray<ACharacter*> AUPSEnemyPointAction::GetCharactersGoingToPoint() const {
    return TArray<ACharacter*>();
}

UUPSEnemyPointActionComponent* AUPSEnemyPointAction::GetCharacterPoint(ACharacter* Character) const {
    return NULL;
}

void AUPSEnemyPointAction::FinishPointAction() {
}

void AUPSEnemyPointAction::EnableVisualization(bool bEnable) {
}

void AUPSEnemyPointAction::ClearPointActionForCharacter(ACharacter* Character) {
}

bool AUPSEnemyPointAction::CanStartPointAction(ACharacter* Character) const {
    return false;
}

void AUPSEnemyPointAction::AllCharactersReachPoints() {
}

void AUPSEnemyPointAction::AbortEnemyPointAction(ACharacter* Character) {
}


