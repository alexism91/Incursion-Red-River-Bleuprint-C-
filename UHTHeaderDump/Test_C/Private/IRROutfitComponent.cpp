#include "IRROutfitComponent.h"
#include "Net/UnrealNetwork.h"

UIRROutfitComponent::UIRROutfitComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OutfitPreset = NULL;
    this->bRollFirstVariants = false;
    this->LeaderMeshTag = TEXT("OutfitLeader");
    this->bUseLeaderBounds = true;
    this->bBuildOnDedicatedServer = false;
    this->bMergePieces = false;
    this->bFreezePoseOnBeginPlay = false;
    this->bPiecesRenderCustomDepth = true;
    this->CustomDepthStencilValue = 1;
    this->CustomDepthStencilWriteMask = ERendererStencilMask::ERSM_Default;
    this->GroomLODSyncInterval = 0.20f;
    this->GroomAttachBone = TEXT("Head");
    this->MergedComponent = NULL;
}

void UIRROutfitComponent::SwitchPerspective(bool bFirstPerson) {
}

void UIRROutfitComponent::SetupPieceComponent_Implementation(USkeletalMeshComponent* Component, const FIRROutfitPiece& Piece) {
}

void UIRROutfitComponent::SetShadowsEnabled(bool bEnabled) {
}

void UIRROutfitComponent::SetRenderCustomDepth(bool bNewRenderCustomDepth) {
}

void UIRROutfitComponent::SetPoseFrozen(bool bFrozen) {
}

void UIRROutfitComponent::SetPiece(FGameplayTag Slot, USkeletalMesh* Mesh, EIRROutfitView View) {
}

void UIRROutfitComponent::SetOutfitPreset(UIRRAppearanceSetup* NewPreset) {
}

void UIRROutfitComponent::SetMergePieces(bool bMerge) {
}

void UIRROutfitComponent::SetHiddenInGame(bool bNewHidden) {
}

void UIRROutfitComponent::SetGroomMinLOD(int32 NewMinLOD) {
}

void UIRROutfitComponent::SetCastDynamicShadow(bool bNewCastDynamicShadow) {
}

void UIRROutfitComponent::OnRep_Pieces() {
}

bool UIRROutfitComponent::IsPoseFrozen() const {
    return false;
}

bool UIRROutfitComponent::HasPiece(FGameplayTag Slot) const {
    return false;
}

void UIRROutfitComponent::HandlePawnRestarted(APawn* Pawn) {
}

void UIRROutfitComponent::HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController) {
}

void UIRROutfitComponent::GetPieceComponents(TArray<USkeletalMeshComponent*>& OutComponents) const {
}

USkeletalMeshComponent* UIRROutfitComponent::GetPieceComponent(FGameplayTag Slot) const {
    return NULL;
}

UIRRAppearanceSetup* UIRROutfitComponent::GetOutfitPreset() const {
    return NULL;
}

void UIRROutfitComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIRROutfitComponent, Pieces);
}


