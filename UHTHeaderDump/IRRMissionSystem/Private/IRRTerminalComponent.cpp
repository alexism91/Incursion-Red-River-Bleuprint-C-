#include "IRRTerminalComponent.h"
#include "Net/UnrealNetwork.h"

UIRRTerminalComponent::UIRRTerminalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TerminalSetup = NULL;
    this->TerminalConsoleWidget = NULL;
    this->bPowerOn = false;
    this->InteractingActor = NULL;
    this->ActiveHacker = NULL;
    this->bHacking = false;
    this->HackRemainingCost = 0.00f;
    this->LastHackInterruptReason = EIRRHackDeviceState::Ready;
}

bool UIRRTerminalComponent::TryGoBack() {
    return false;
}

bool UIRRTerminalComponent::TryChangeDirectory(const FString& Path, bool bForce, TArray<UIRRTerminalSequence*>& OutSequences) {
    return false;
}

void UIRRTerminalComponent::TriggerResponses_MC_Implementation(const TArray<UIRRTerminalSequence*>& Sequences, const FText& Command) {
}

void UIRRTerminalComponent::TriggerErrorResponse(const FText& Command) {
}

void UIRRTerminalComponent::TogglePowerOn_Server_Implementation(bool bOn) {
}

void UIRRTerminalComponent::TogglePowerOn(bool bOn) {
}

void UIRRTerminalComponent::StopInteraction_Server_Implementation() {
}

void UIRRTerminalComponent::StopInteraction_Client_Implementation() {
}

void UIRRTerminalComponent::StopHacking_Server_Implementation() {
}

void UIRRTerminalComponent::StopHacking() {
}

void UIRRTerminalComponent::StartInteraction_Client_Implementation(AActor* NewInteractingActor) {
}

void UIRRTerminalComponent::StartInteraction(AActor* NewInteractingActor) {
}

bool UIRRTerminalComponent::StartHacking() {
    return false;
}

void UIRRTerminalComponent::SimulateHackInput_MC_Implementation(const FText& Input) {
}

void UIRRTerminalComponent::Shutdown() {
}

void UIRRTerminalComponent::SetUser_MC_Implementation(FIRRTerminalUser NewUser) {
}

void UIRRTerminalComponent::SetUser(FIRRTerminalUser NewUser) {
}

void UIRRTerminalComponent::SetupHacking() {
}

void UIRRTerminalComponent::SetDirectoryPath_MC_Implementation(FName NewDirectoryName) {
}

void UIRRTerminalComponent::SetDirectoryPath(FIRRTerminalDirectory NewDirectory) {
}

bool UIRRTerminalComponent::RequestSetDirectoryPath(const FString& Path, bool bForce) {
    return false;
}

bool UIRRTerminalComponent::RequestLogin(const FString& Name, const FString& Password) {
    return false;
}

void UIRRTerminalComponent::RefreshDoorCodes() {
}

void UIRRTerminalComponent::ProcessCommand_Server_Implementation(const FText& Input, FIRRTerminalCommand TempCommand) {
}

void UIRRTerminalComponent::ProcessCommand(const FText& Input, FIRRTerminalCommand TempCommand) {
}

void UIRRTerminalComponent::PredictCommand(const FText& Input, FIRRTerminalCommand TempCommand) {
}

void UIRRTerminalComponent::OnRep_PowerOn() {
}

void UIRRTerminalComponent::OnRep_ActiveDirectoryName() {
}



bool UIRRTerminalComponent::IsValidLogin(const FString& Name, const FString& Password) const {
    return false;
}

bool UIRRTerminalComponent::IsValidDirectoryPath(const FString& Path) const {
    return false;
}

bool UIRRTerminalComponent::IsRootDirectory(const FIRRTerminalDirectory& Directory) const {
    return false;
}

bool UIRRTerminalComponent::IsLocallyControlled() {
    return false;
}

bool UIRRTerminalComponent::IsDirectoryVisible(const UIRRTerminalComponent* Terminal, FIRRTerminalDirectory Directory) {
    return false;
}

bool UIRRTerminalComponent::IsDirectoryAccessible(const UIRRTerminalComponent* Terminal, FIRRTerminalDirectory Directory) {
    return false;
}

void UIRRTerminalComponent::Init() {
}

void UIRRTerminalComponent::HackInterrupted_MC_Implementation(EIRRHackDeviceState reason) {
}

FIRRTerminalUser UIRRTerminalComponent::GetUserByName(const FString& Name) {
    return FIRRTerminalUser{};
}

void UIRRTerminalComponent::GetSplitCommand(FText Command, FString& LPart, FString& RPart) {
}

FIRRTerminalDirectory UIRRTerminalComponent::GetRootDirectory() const {
    return FIRRTerminalDirectory{};
}

FString UIRRTerminalComponent::GetPrintableDirectoryPath(FIRRTerminalDirectory Directory) const {
    return TEXT("");
}

bool UIRRTerminalComponent::GetParentDirectory(const FIRRTerminalDirectory& Directory, FIRRTerminalDirectory& OutParent) const {
    return false;
}

FIRRHackDeviceStatus UIRRTerminalComponent::GetHackDeviceStatus() const {
    return FIRRHackDeviceStatus{};
}

FString UIRRTerminalComponent::GetFullDirectoryPath() const {
    return TEXT("");
}

FIRRTerminalDirectory UIRRTerminalComponent::GetDirectoryByName(FName DirectoryName) const {
    return FIRRTerminalDirectory{};
}

TArray<FIRRTerminalDirectory> UIRRTerminalComponent::GetChildDirectories(const FIRRTerminalDirectory& Directory) const {
    return TArray<FIRRTerminalDirectory>();
}

FIRRTerminalUser UIRRTerminalComponent::GetActiveUser() const {
    return FIRRTerminalUser{};
}

AActor* UIRRTerminalComponent::GetActiveOperator() const {
    return NULL;
}

FIRRTerminalDirectory UIRRTerminalComponent::GetActiveDirectory() const {
    return FIRRTerminalDirectory{};
}

UIRRTerminalFile* UIRRTerminalComponent::FindFileInActiveDirectory(const FString& Filename) const {
    return NULL;
}

void UIRRTerminalComponent::ExecuteMissionEvent(UIRRMissionEvent* MissionEvent) {
}

bool UIRRTerminalComponent::CheckDirectoryAccess(const UIRRTerminalComponent* Terminal, const FIRRTerminalDirectory& Directory, TArray<UIRRTerminalSequence*>& OutSequences) {
    return false;
}

bool UIRRTerminalComponent::CanStartHacking() const {
    return false;
}

FString UIRRTerminalComponent::BuildFullDirectoryPath(const FIRRTerminalDirectory& Directory) const {
    return TEXT("");
}

void UIRRTerminalComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRRTerminalComponent, bPowerOn);
    DOREPLIFETIME(UIRRTerminalComponent, InteractingActor);
    DOREPLIFETIME(UIRRTerminalComponent, ActiveHacker);
    DOREPLIFETIME(UIRRTerminalComponent, ActiveDirectoryName);
    DOREPLIFETIME(UIRRTerminalComponent, ActiveUser);
    DOREPLIFETIME(UIRRTerminalComponent, DoorCodes);
    DOREPLIFETIME(UIRRTerminalComponent, bHacking);
    DOREPLIFETIME(UIRRTerminalComponent, HackRemainingCost);
}


