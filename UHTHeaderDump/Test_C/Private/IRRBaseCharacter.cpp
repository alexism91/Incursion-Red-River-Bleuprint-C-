#include "IRRBaseCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SenseSystem -ObjectName=SenseStimulusComponent -FallbackName=SenseStimulusComponent
#include "AdvancedMovementComponent.h"
#include "IRRAIDataComponent.h"
#include "IRRHealthCosmeticsComponent.h"
#include "IRRSuppressionReceiver.h"
#include "IRRTeamComponent.h"
#include "IRRZoneEffectTrackerComponent.h"

AIRRBaseCharacter::AIRRBaseCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UAdvancedMovementComponent>(TEXT("CharMoveComp"))) {
    this->bDisableUnusedGearOverlaps = true;
    this->SuppressionReceiverComponent = CreateDefaultSubobject<UIRRSuppressionReceiver>(TEXT("Suppression Receiver Component"));
    this->TeamComponent = CreateDefaultSubobject<UIRRTeamComponent>(TEXT("TeamComponent"));
    this->AIDataComponent = CreateDefaultSubobject<UIRRAIDataComponent>(TEXT("AIData Component"));
    this->ZoneEffectTrackerComponent = CreateDefaultSubobject<UIRRZoneEffectTrackerComponent>(TEXT("Zone Effect Tracker Component"));
    this->HealthCosmeticsComponent = CreateDefaultSubobject<UIRRHealthCosmeticsComponent>(TEXT("Health Cosmetics Component"));
    this->SenseStimulus = CreateDefaultSubobject<USenseStimulusComponent>(TEXT("Sense Stimulus Comp"));
    this->SenseReceiver = NULL;
    this->HealthComponent = NULL;
    this->WeaponInHands = NULL;
    this->EquippableInHands = NULL;
    this->GameplayTagsComponent = NULL;
    this->GameplayAbilityComponent = NULL;
    this->EquipmentComponent = NULL;
    this->LeanComp = NULL;
    this->AGRSoundMaster = NULL;
    this->AGRAnimMasterComponent = NULL;
    this->ClothingComponent = NULL;
    this->OutfitComponent = NULL;
    this->MontageComponent = NULL;
    this->AkComponent = NULL;
    this->AcousticEmitter = NULL;
    this->FrozenSensePointCount = 3;
}

void AIRRBaseCharacter::RefreshTraceIgnoreActors() {
}

void AIRRBaseCharacter::OnOwnerRevive(AActor* RevivedBy) {
}

void AIRRBaseCharacter::OnOwnerDeath(FIRRDamageData DamageData) {
}

void AIRRBaseCharacter::OnEquippableChanged(UEquippableComponent* EquippableComponent) {
}

bool AIRRBaseCharacter::IsAcousticallyIndoors() const {
    return false;
}

UIRRZoneEffectTrackerComponent* AIRRBaseCharacter::GetZoneEffectTrackerComponent() const {
    return NULL;
}

UIRRTeamComponent* AIRRBaseCharacter::GetTeamComponent() const {
    return NULL;
}

UIRRSuppressionReceiver* AIRRBaseCharacter::GetSuppressionReceiver() const {
    return NULL;
}

UAGR_SoundMaster* AIRRBaseCharacter::GetSoundMasterComponent() const {
    return NULL;
}

USenseStimulusComponent* AIRRBaseCharacter::GetSenseStimulusComponent() const {
    return NULL;
}

USenseReceiverComponent* AIRRBaseCharacter::GetSenseReceiverComponent() const {
    return NULL;
}

UIRROutfitComponent* AIRRBaseCharacter::GetOutfitComponent() const {
    return NULL;
}

FVector AIRRBaseCharacter::GetNeutralEyeLocation() const {
    return FVector{};
}

float AIRRBaseCharacter::GetNeutralEyeHeight() const {
    return 0.0f;
}

UMontageComponent* AIRRBaseCharacter::GetMontageComponent() const {
    return NULL;
}

ULeanComponent* AIRRBaseCharacter::GetLeanComponent() const {
    return NULL;
}

UIRRHealthCosmeticsComponent* AIRRBaseCharacter::GetHealthCosmeticsComponent() const {
    return NULL;
}

UHealthComponent* AIRRBaseCharacter::GetHealthComponent() const {
    return NULL;
}

UGameplayTagsComponent* AIRRBaseCharacter::GetGameplayTagsComponent() const {
    return NULL;
}

FVector AIRRBaseCharacter::GetEyeLocation() const {
    return FVector{};
}

UEquipmentComponent* AIRRBaseCharacter::GetEquipmentComponent() const {
    return NULL;
}

UClothingComponent* AIRRBaseCharacter::GetClothingComponent() const {
    return NULL;
}

TArray<FSensePointData> AIRRBaseCharacter::GetBoneSensePoints(FName SensorTag) const {
    return TArray<FSensePointData>();
}

FVector AIRRBaseCharacter::GetBodyPartLocation(const EIRRBodyPart BodyPartType) const {
    return FVector{};
}

UAGRAnimMasterComponent* AIRRBaseCharacter::GetAnimMasterComponent() const {
    return NULL;
}

UAkComponent* AIRRBaseCharacter::GetAkComponent() const {
    return NULL;
}

UIRRAIDataComponent* AIRRBaseCharacter::GetAIDataComponent() const {
    return NULL;
}

UAdvancedMovementComponent* AIRRBaseCharacter::GetAdvancedMovementComponent() const {
    return NULL;
}

AActor* AIRRBaseCharacter::GetAcousticRoomActor() const {
    return NULL;
}

EIRRAcousticEnvironment AIRRBaseCharacter::GetAcousticEnvironment() const {
    return EIRRAcousticEnvironment::ExteriorField;
}

UGameplayAbilityComponent* AIRRBaseCharacter::GetAbilityComponent() const {
    return NULL;
}

void AIRRBaseCharacter::DisableUnusedGearOverlaps() {
}

void AIRRBaseCharacter::BroadcastAINoiseBP(const FIRRAINoiseData& Data) {
}


