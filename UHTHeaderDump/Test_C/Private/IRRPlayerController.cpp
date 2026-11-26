#include "IRRPlayerController.h"
#include "GeneralCheatManager.h"
#include "IRRGroundHoldComponent.h"
#include "IRRPlayerCameraManager.h"
#include "IRRPlayerDangerComponent.h"
#include "Net/UnrealNetwork.h"

AIRRPlayerController::AIRRPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PlayerCameraManagerClass = AIRRPlayerCameraManager::StaticClass();
    this->CheatClass = UGeneralCheatManager::StaticClass();
    this->ClickEventKeys.AddDefaulted(1);
    this->CinematicCameraPawnClass = NULL;
    this->bCinematicCameraEnabled = false;
    this->SpawnIndex = -1;
    this->DangerComponent = CreateDefaultSubobject<UIRRPlayerDangerComponent>(TEXT("DangerComponent"));
    this->GroundHoldComponent = CreateDefaultSubobject<UIRRGroundHoldComponent>(TEXT("GroundHoldComponent"));
}

void AIRRPlayerController::TogglePlayerInput_Implementation(bool bEnable) {
}

void AIRRPlayerController::SetPlayerHidden_Implementation(bool bHidePlayer) {
}

void AIRRPlayerController::SetCustomViewTarget_Implementation(AActor* NewViewTarget, float BlendTime, float BlendOut) {
}

void AIRRPlayerController::SetCinematicCamera_Implementation() {
}

void AIRRPlayerController::ServerSpawnMenuRequest_Implementation(FName ProviderName, FName EntryId, EIRRSpawnMenuAction Action, int32 Count, FVector Location, FRotator Rotation) {
}

void AIRRPlayerController::ServerOpenSecureContainer_Implementation(ASecureContainer* Container, FName ContentName) {
}

void AIRRPlayerController::ServerOpenRaidTrader_Implementation(ARaidTrader* Trader, FName ContentName) {
}

void AIRRPlayerController::ServerNotifyLoadedWorldWorkaround_Implementation(FName WorldPackageName) {
}
bool AIRRPlayerController::ServerNotifyLoadedWorldWorkaround_Validate(FName WorldPackageName) {
    return true;
}

void AIRRPlayerController::Server_RequestAirstrike_Implementation(FIRRFireSupportSalvo Salvo, AActor* TargetActor, FVector AimPoint) {
}

void AIRRPlayerController::Server_ReportDesignationCompromised_Implementation(FVector OperatorLocation) {
}

bool AIRRPlayerController::IsCinematicCameraEnabled() const {
    return false;
}

int32 AIRRPlayerController::GetSpawnIndex() const {
    return 0;
}

ASecureContainerSession* AIRRPlayerController::GetSecureContainerSession() const {
    return NULL;
}

ARaidTraderSession* AIRRPlayerController::GetRaidTraderSession() const {
    return NULL;
}

APawn* AIRRPlayerController::GetCachedPlayerPawn() const {
    return NULL;
}

APawn* AIRRPlayerController::GetCachedCinematicCameraPawn() const {
    return NULL;
}

void AIRRPlayerController::FinishCustomViewTarget(AActor* NewViewTarget, bool bHidePlayer) {
}

void AIRRPlayerController::ApplyDesignationCompromise_Implementation(FVector OperatorLocation) {
}

void AIRRPlayerController::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIRRPlayerController, bCinematicCameraEnabled);
}


