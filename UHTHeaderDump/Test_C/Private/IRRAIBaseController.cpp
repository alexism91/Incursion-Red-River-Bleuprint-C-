#include "IRRAIBaseController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNComponent -FallbackName=HTNComponent
#include "IRRAIAimComponent.h"
#include "IRRAIBarkController.h"
#include "IRRAIBehaviorComponent.h"
#include "IRRAIBossComponent.h"
#include "IRRAICoverComponent.h"
#include "IRRAIFocusComponent.h"
#include "IRRAIGrenadeThrowComponent.h"
#include "IRRAIHealthStateManager.h"
#include "IRRAIReloadComponent.h"
#include "IRRAISearchComponent.h"
#include "IRRAIStanceComponent.h"
#include "IRRAITargetTracker.h"
#include "IRRAIWeaponManager.h"
#include "IRRAIWeaponSelector.h"
#include "IRRMoraleComponent.h"
#include "IRRNavQueryFilter_Avoidance.h"
#include "IRRPathFollowingComponent.h"
#include "IRRStatEffectComponent.h"

AIRRAIBaseController::AIRRAIBaseController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UIRRPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    this->bAttachToPawn = true;
    this->BrainComponent = CreateDefaultSubobject<UHTNComponent>(TEXT("HTNComponent"));
    this->DefaultNavigationFilterClass = UIRRNavQueryFilter_Avoidance::StaticClass();
    this->SpawnIndex = -1;
    this->HTNAsset = NULL;
    this->MaxControlRotationPitch = 80.00f;
    this->HTNComponent = (UHTNComponent*)BrainComponent;
    this->TargetTrackerComponent = CreateDefaultSubobject<UIRRAITargetTracker>(TEXT("TargetTracker"));
    this->GroupComponent = NULL;
    this->BehaviorComponent = CreateDefaultSubobject<UIRRAIBehaviorComponent>(TEXT("BehaviorComponent"));
    this->WeaponManager = CreateDefaultSubobject<UIRRAIWeaponManager>(TEXT("WeaponManager"));
    this->ReloadComponent = CreateDefaultSubobject<UIRRAIReloadComponent>(TEXT("ReloadComponent"));
    this->WeaponSelector = CreateDefaultSubobject<UIRRAIWeaponSelector>(TEXT("WeaponSelector"));
    this->GrenadeThrowComponent = CreateDefaultSubobject<UIRRAIGrenadeThrowComponent>(TEXT("GrenadeThrowComponent"));
    this->BarkController = CreateDefaultSubobject<UIRRAIBarkController>(TEXT("BarkController"));
    this->AimComponent = CreateDefaultSubobject<UIRRAIAimComponent>(TEXT("AimComponent"));
    this->BossComponent = CreateDefaultSubobject<UIRRAIBossComponent>(TEXT("BossComponent"));
    this->SearchComponent = CreateDefaultSubobject<UIRRAISearchComponent>(TEXT("AISearchComponent"));
    this->AICoverComponent = CreateDefaultSubobject<UIRRAICoverComponent>(TEXT("AICoverComponent"));
    this->StatEffectComponent = CreateDefaultSubobject<UIRRStatEffectComponent>(TEXT("StatEffectComponent"));
    this->MoraleComponent = CreateDefaultSubobject<UIRRMoraleComponent>(TEXT("MoraleComponent"));
    this->StanceComponent = CreateDefaultSubobject<UIRRAIStanceComponent>(TEXT("StanceComponent"));
    this->HealthStateManager = CreateDefaultSubobject<UIRRAIHealthStateManager>(TEXT("HealthStateManager"));
    this->FocusComponent = CreateDefaultSubobject<UIRRAIFocusComponent>(TEXT("FocusComponent"));
    this->AggressivenessMultiplier = 0.50f;
    this->AllegianceAggressivenessMultiplier = 1.00f;
    this->AggressivenessRoll = 0.00f;
    this->ReactionTimeMultiplier = 1.00f;
}

void AIRRAIBaseController::StopAI() {
}

void AIRRAIBaseController::Replan() {
}

void AIRRAIBaseController::RemoveTag(const FGameplayTag& Tag) {
}

void AIRRAIBaseController::OnOwnerRevived(AActor* RevivedBy) {
}

void AIRRAIBaseController::OnOwnerDeath(FIRRDamageData DamageData) {
}

bool AIRRAIBaseController::IsMoving() const {
    return false;
}

bool AIRRAIBaseController::IsLocationInVisionCone(const FVector& Location, bool bApplyModifiers) const {
    return false;
}

bool AIRRAIBaseController::IsActorInGroup(const AActor* Actor) const {
    return false;
}

bool AIRRAIBaseController::HasResolvedLoadout() const {
    return false;
}

UIRRAIWeaponSelector* AIRRAIBaseController::GetWeaponSelector() const {
    return NULL;
}

UIRRAIWeaponManager* AIRRAIBaseController::GetWeaponManager() const {
    return NULL;
}

bool AIRRAIBaseController::GetVisionCones(FIRRVisionConeSet& OutCones, bool bApplyModifiers) const {
    return false;
}

UIRRAITargetTracker* AIRRAIBaseController::GetTargetTracker() const {
    return NULL;
}

UIRRAITarget* AIRRAIBaseController::GetTarget(const APawn* Actor) const {
    return NULL;
}

UIRRStatEffectComponent* AIRRAIBaseController::GetStatEffectComponent() const {
    return NULL;
}

UIRRAIStanceComponent* AIRRAIBaseController::GetStanceComponent() const {
    return NULL;
}

int32 AIRRAIBaseController::GetSpawnIndex() const {
    return 0;
}

UIRRAIReloadComponent* AIRRAIBaseController::GetReloadComponent() const {
    return NULL;
}

float AIRRAIBaseController::GetReactionTimeMultiplier() const {
    return 0.0f;
}

FVector AIRRAIBaseController::GetPawnNeutralEyeLocation() const {
    return FVector{};
}

FVector AIRRAIBaseController::GetPawnEyeLocation() const {
    return FVector{};
}

UIRRMoraleComponent* AIRRAIBaseController::GetMoraleComponent() const {
    return NULL;
}

bool AIRRAIBaseController::GetIsAlive() const {
    return false;
}

UHTNComponent* AIRRAIBaseController::GetHTNComponent() const {
    return NULL;
}

UIRRAIHealthStateManager* AIRRAIBaseController::GetHealthStateManager() const {
    return NULL;
}

UIRRAIGroupComponent* AIRRAIBaseController::GetGroupComponent() const {
    return NULL;
}

UIRRAIGrenadeThrowComponent* AIRRAIBaseController::GetGrenadeThrowComponent() const {
    return NULL;
}

FVector AIRRAIBaseController::GetEyeHeightOffsetVector() const {
    return FVector{};
}

float AIRRAIBaseController::GetEyeHeightOffset() const {
    return 0.0f;
}

UIRRAIBossComponent* AIRRAIBaseController::GetBossComponent() const {
    return NULL;
}

UIRRAIBehaviorComponent* AIRRAIBaseController::GetBehaviorComponent() const {
    return NULL;
}

AIRRAIBaseCharacter* AIRRAIBaseController::GetBaseCharacter() const {
    return NULL;
}

UIRRAIBarkController* AIRRAIBaseController::GetBarkController() const {
    return NULL;
}

UIRRAISearchComponent* AIRRAIBaseController::GetAISearchComponent() const {
    return NULL;
}

UIRRAIAimComponent* AIRRAIBaseController::GetAimComponent() const {
    return NULL;
}

UIRRAICoverComponent* AIRRAIBaseController::GetAICoverComponent() const {
    return NULL;
}

float AIRRAIBaseController::GetAggressiveness() const {
    return 0.0f;
}

void AIRRAIBaseController::AddTag(const FGameplayTag& Tag) {
}

void AIRRAIBaseController::ActivateHTN() {
}


