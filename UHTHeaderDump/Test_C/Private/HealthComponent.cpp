#include "HealthComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UHealthComponent::UHealthComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ReviveHealthPercentage = 0.50f;
    this->FallDamageCurve = NULL;
    this->bEnabled = true;
    this->Health = NULL;
    this->FallHeightStart = 0.00f;
    this->bIsInvulnerable = false;
    this->bTechnicalInvulnerable = false;
    this->bKeepInventoryOnDeath = false;
    this->DamageItemDefinition = NULL;
}

void UHealthComponent::SetTechnicalInvulnerable_Server_Implementation(bool bActivate) {
}

void UHealthComponent::SetKeepInventoryOnDeath_Server_Implementation(bool bActivate) {
}

void UHealthComponent::SetIsInvincible_Server_Implementation(bool bActivate) {
}

void UHealthComponent::Server_DebugHeal_Implementation(float Amount) {
}

void UHealthComponent::Server_DebugApplyDamage_Implementation(float Amount, FName BoneName, TSubclassOf<UDamageType> DebugDamageType) {
}

void UHealthComponent::Revive(AActor* ReviveBy) {
}

void UHealthComponent::ReceivedDamage_Implementation(FIRRDamageData DamageData, bool bPlayerHurt, bool bArmorBreak) {
}

void UHealthComponent::OnTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser) {
}

void UHealthComponent::OnTakeBulletDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser, UIRRItemDefinition* NewDamageItemData) {
}

void UHealthComponent::OnMovemendModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}


bool UHealthComponent::GetIsDead() const {
    return false;
}

float UHealthComponent::GetHealthValue() {
    return 0.0f;
}

void UHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UHealthComponent, bIsInvulnerable);
    DOREPLIFETIME(UHealthComponent, bTechnicalInvulnerable);
    DOREPLIFETIME(UHealthComponent, bKeepInventoryOnDeath);
}


