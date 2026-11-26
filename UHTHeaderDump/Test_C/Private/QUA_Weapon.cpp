#include "QUA_Weapon.h"
#include "Net/UnrealNetwork.h"

AQUA_Weapon::AQUA_Weapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponData = NULL;
    this->CurrentSight = 0;
    this->isPointSight = false;
    this->ShotCount = 0;
    this->DelayedShotCount = 0;
}

void AQUA_Weapon::UpdateWeaponStatsByDurability(FVector2D NewDurability) {
}

void AQUA_Weapon::UpdateMuzzleDistance() {
}

void AQUA_Weapon::UpdateGameplayTags_Implementation(const FGameplayTagContainer ToAddAbilities, const FGameplayTagContainer ToRemoveAbilities) {
}

void AQUA_Weapon::TriggerPointSight() {
}


void AQUA_Weapon::SetWeaponStats(TArray<FQUA_StatItem> NewStats) {
}

FQUA_LocalSight AQUA_Weapon::RequestCurrentSight() {
    return FQUA_LocalSight{};
}

void AQUA_Weapon::ReplicateWeaponStates_Implementation(FGameplayTagContainer NewWeaponStates) {
}


void AQUA_Weapon::OnWeaponUnequipped() {
}


void AQUA_Weapon::OnWeaponEquipped() {
}



void AQUA_Weapon::OnShellEjection() {
}

float AQUA_Weapon::GetRecoilMultiplier() {
    return 0.0f;
}

float AQUA_Weapon::GetAccuracyMultiplier() {
    return 0.0f;
}

FQUA_LocalSight AQUA_Weapon::CycleSights() {
    return FQUA_LocalSight{};
}

void AQUA_Weapon::CalculateSights(TArray<AActor*> SightRefs, AActor* OwningPlayer) {
}

FTransform AQUA_Weapon::CalculatedGripTransform(AActor* GripRef, AActor* OwningPlayer) {
    return FTransform{};
}

void AQUA_Weapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AQUA_Weapon, WeaponStates);
}


