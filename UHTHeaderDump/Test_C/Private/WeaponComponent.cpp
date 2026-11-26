#include "WeaponComponent.h"
#include "Net/UnrealNetwork.h"

UWeaponComponent::UWeaponComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RateOfFireRtpc = NULL;
    this->TailPitchRtpc = NULL;
    this->TailVolumeRtpc = NULL;
    this->SuppressionCheckDistance = 600.00f;
    this->ResetShotCountDelay_Player = 0.50f;
    this->ResetShotCountDelay_AI = 2.00f;
    this->MuzzleFlashProbability = 0.20f;
    this->BurstShotCountMax = 3;
    this->DefaultVelocity = 99300.00f;
    this->BulletClass = NULL;
    this->BulletDamageType = NULL;
    this->BulletCasing = NULL;
    this->bManualChamber = false;
    this->ManualChamberDelay = 0.50f;
    this->bOpenChamber = false;
    this->ShotFiredNoiseTag = TEXT("Gunfire");
    this->bOverrideAISettings = false;
    this->MaxDeliberateMissShotCount = 3;
    this->MinDeliberateMissTimeResetDelay = 1.00f;
    this->FLengthMultiplier = NULL;
    this->FRecoilMultiplier = NULL;
    this->FDurabilityMalfunctionCurve = NULL;
    this->bDebugMalfunction = true;
    this->DegradationRate_SemiMultiplier = 0.80f;
    this->DegradationRate_AutoMultiplier = 1.20f;
    this->MisfireChance = 0.05f;
    this->BlockChance = 0.05f;
    this->FHeatingMalfunctionCurve = NULL;
    this->FHeatingDurabilityCurve = NULL;
    this->CooldownTickRate = 0.10f;
    this->CooldownDelay = 0.20f;
    this->AIManager = NULL;
    this->Foregrip = NULL;
    this->PistolGrip = NULL;
    this->Muzzle = NULL;
    this->Mag = NULL;
    this->LocPointSightComponent = NULL;
    this->LocSightIndex = -1;
    this->bIsPointSight = false;
    this->LocTacticalIndex = 0;
    this->bIsFireTriggered = false;
    this->HeatingValue = 0.00f;
    this->bFiringLoopActive = false;
}

void UWeaponComponent::UpdateWeaponEssentials() {
}

void UWeaponComponent::UpdateCurrentTacticalOption() {
}

void UWeaponComponent::UpdateAmmunitionState() {
}

bool UWeaponComponent::TryIncrementTactical() {
    return false;
}

bool UWeaponComponent::TryIncrementSight() {
    return false;
}

void UWeaponComponent::TriggerFire() {
}

void UWeaponComponent::ToggleCurrentTacticalOption() {
}

void UWeaponComponent::ToggleAllTacticalAttachments(bool bEnabled) {
}

void UWeaponComponent::SwitchFireMode(FGameplayTag OldFireModeTag, FGameplayTag NewFireModeTag) {
}

void UWeaponComponent::StopFiringWeapon_Server_Implementation() {
}

void UWeaponComponent::StopFiringWeapon_Networked() {
}

void UWeaponComponent::StopFiringWeapon_MC_Implementation() {
}

void UWeaponComponent::StopFiring() {
}

void UWeaponComponent::StartFiringWeapon_Server_Implementation() {
}

void UWeaponComponent::StartFiringWeapon_Networked() {
}

void UWeaponComponent::StartFiringWeapon_MC_Implementation() {
}

void UWeaponComponent::StartFiring() {
}

void UWeaponComponent::SpawnEffects() {
}

void UWeaponComponent::SpawnCosmeticBullet_MC_Implementation(FVector_NetQuantize Origin, FVector_NetQuantizeNormal Direction, int32 SpeedMetersPerSecond) {
}

void UWeaponComponent::SpawnBullet_Server_Implementation(FVector LocLocation, FVector LocAim, UIRRItemDefinition* BulletData) {
}

void UWeaponComponent::SpawnBullet_Networked(FVector LocAim, FVector LocLocation) {
}

void UWeaponComponent::SpawnBullet(FVector LocLocation, FVector LocAim, UIRRItemDefinition* BulletData) {
}

void UWeaponComponent::SingleFireWeapon_Server_Implementation() {
}

void UWeaponComponent::SingleFireWeapon_Networked() {
}

void UWeaponComponent::SingleFireWeapon_MC_Implementation() {
}

void UWeaponComponent::ShowMagCapacity(bool bEnable) {
}

void UWeaponComponent::SetTriggerHeld(bool bHeld) {
}

void UWeaponComponent::ResetShotCount() {
}

void UWeaponComponent::RequestReloadData(FReloadData& OutReloadData, bool& bForceEmergencyReload) {
}

void UWeaponComponent::RemoteFireWeapon() {
}

void UWeaponComponent::ReduceHeating() {
}

void UWeaponComponent::PreFireCalculations_Implementation() {
}

void UWeaponComponent::OpenSemiAutoGate() {
}

void UWeaponComponent::OnRep_FiringLoopActive() {
}

void UWeaponComponent::OnBulletImpact_Server_Implementation(FTransform SpawnTransform, FHitResult HitResult, bool Penetrated, UCurveFloat* EffectiveRange, UIRRItemDefinition* BulletData) {
}

void UWeaponComponent::OnBulletImpact_Networked(FTransform SpawnTransform, FHitResult HitResult, bool Penetrated, UCurveFloat* EffectiveRange, UIRRItemDefinition* BulletData) {
}

void UWeaponComponent::OnBulletImpact_MC_Implementation(FTransform SpawnTransform, FHitResult HitResult, bool Penetrated) {
}

void UWeaponComponent::LocalFireWeapon() {
}





bool UWeaponComponent::IsSuppressed() const {
    return false;
}

bool UWeaponComponent::IsPointSightActive() const {
    return false;
}

bool UWeaponComponent::IsFullAuto() const {
    return false;
}

bool UWeaponComponent::IsChamberEmpty() {
    return false;
}

bool UWeaponComponent::IsAnyTacticalDeviceOn() const {
    return false;
}

void UWeaponComponent::InsertBullet(bool bChambered) {
}

void UWeaponComponent::IncreaseHeating() {
}

void UWeaponComponent::HolsterMag() {
}

bool UWeaponComponent::HasMalfunction() {
    return false;
}

bool UWeaponComponent::HasFireMode_Implementation(const FGameplayTag& FireMode) const {
    return false;
}

UWeaponDataAsset* UWeaponComponent::GetWeaponDataAsset() {
    return NULL;
}

FWeaponAudioSettings UWeaponComponent::GetWeaponAudioSettings() {
    return FWeaponAudioSettings{};
}

float UWeaponComponent::GetSpread() {
    return 0.0f;
}

float UWeaponComponent::GetRecoilMultiplier() {
    return 0.0f;
}

float UWeaponComponent::GetRecoil() {
    return 0.0f;
}

float UWeaponComponent::GetLengthMultiplier() {
    return 0.0f;
}

float UWeaponComponent::GetLength(bool Left, bool Right) {
    return 0.0f;
}

float UWeaponComponent::GetFireRate() {
    return 0.0f;
}

FRotator UWeaponComponent::GetFirePortRotator() const {
    return FRotator{};
}

FVector UWeaponComponent::GetFirePortLocation() const {
    return FVector{};
}

EFireMode UWeaponComponent::GetFireModeFromTagContainer(FGameplayTagContainer TagContainer) {
    return EFireMode::FM_Auto;
}

EFireMode UWeaponComponent::GetFireMode() const {
    return EFireMode::FM_Auto;
}

float UWeaponComponent::GetDurabilityPercentage() {
    return 0.0f;
}

FIRRTacticalAttachmentOption UWeaponComponent::GetCurrentTacticalOption() {
    return FIRRTacticalAttachmentOption{};
}

FSightData UWeaponComponent::GetCurrentSightData() {
    return FSightData{};
}

USightComponent* UWeaponComponent::GetCurrentSightComponent() const {
    return NULL;
}

void UWeaponComponent::FixMalfunction() {
}

void UWeaponComponent::ExecuteChamberWeapon() {
}

void UWeaponComponent::EjectShell() {
}

void UWeaponComponent::DropMag_HandleSeparateFOV(AActor* MagRef) {
}

void UWeaponComponent::DropMag() {
}

void UWeaponComponent::DrawMag() {
}

void UWeaponComponent::DrawBullet() {
}

FGameplayTag UWeaponComponent::DetermineMalfunction() {
    return FGameplayTag{};
}

bool UWeaponComponent::CycleTacticalOption() {
    return false;
}

void UWeaponComponent::CheckChamberWeapon() {
}

bool UWeaponComponent::CanAimWithCurrentSight() const {
    return false;
}

bool UWeaponComponent::AreOpticsBlocked() const {
    return false;
}

void UWeaponComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UWeaponComponent, bFiringLoopActive);
}


