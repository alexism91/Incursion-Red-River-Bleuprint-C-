#include "EBBarrel.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

UEBBarrel::UEBBarrel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bHiddenInGame = true;
    this->DebugArrowSize = 100.00f;
    this->InheritVelocity = 1.00f;
    this->RecoilMultiplier = 1.00f;
    this->Spread = 0.00f;
    this->MuzzleVelocity = 0.00f;
    this->FireRateMin = 1.00f;
    this->FireRateMax = 1.00f;
    this->FireMode = EFireMode::FM_Auto;
    this->ShootingBlocked = false;
    this->BurstCount = 3;
    this->GatlingAutoSpool = true;
    this->GatlingSpoolUpTime = 1.00f;
    this->GatlingSpoolDownTime = 1.00f;
    this->GatlingPhase = 0.00f;
    this->CycleAmmo = true;
    this->CycleAmmoUnlimited = true;
    this->CycleAmmoCount = 0;
    this->CycleAmmoPos = 0;
    this->ChamberedBullet = NULL;
    this->Shooting = false;
    this->Spooling = false;
    this->GatlingRPS = 1.00f;
    this->LoadNext = true;
    this->Cooldown = 0.00f;
    this->BurstRemaining = 0;
    this->ReplicateVariables = true;
    this->ReplicateShotFiredEvents = true;
    this->ClientSideAim = false;
    this->ClientAimUpdateFrequency = 30.00f;
    this->ClientAimDistanceLimit = 200.00f;
    this->AI = false;
    this->DeliberateMissAngle = 20.00f;
    this->OnTargetAimCone = 1.00f;
    this->AimSkill = 1.00f;
    this->Target = NULL;
    this->TargetBone = TEXT("spine_02");
}

void UEBBarrel::UnloadChambered_Implementation(bool ManualCharge) {
}
bool UEBBarrel::UnloadChambered_Validate(bool ManualCharge) {
    return true;
}

void UEBBarrel::SwitchFireMode_Implementation(EFireMode NewFireMode) {
}
bool UEBBarrel::SwitchFireMode_Validate(EFireMode NewFireMode) {
    return true;
}

void UEBBarrel::ShotFiredMulticast_Implementation() {
}

void UEBBarrel::ShootRepCSA_Implementation(bool Trigger, FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim) {
}
bool UEBBarrel::ShootRepCSA_Validate(bool Trigger, FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim) {
    return true;
}

void UEBBarrel::ShootRep_Implementation(bool Trigger) {
}
bool UEBBarrel::ShootRep_Validate(bool Trigger) {
    return true;
}

void UEBBarrel::Shoot(bool Trigger) {
}

void UEBBarrel::SetAmmo(int32 Count, bool NewUnloadChambered, bool CancelShooting, bool ManualCharge, const TArray<TSubclassOf<AEBBullet>>& NewAmmo) {
}

void UEBBarrel::PredictHitFromLocation(bool& Hit, FVector& HitLocation, float& HitTime, AActor*& HitActor, TArray<FVector>& Trajectory, TSubclassOf<AEBBullet> BulletClass, FVector StartLocation, FVector AimDirection, TArray<AActor*> IgnoredActors, float MaxTime, float Step) const {
}

void UEBBarrel::PredictHit(bool& Hit, FVector& HitLocation, float& HitTime, AActor*& HitActor, TArray<FVector>& Trajectory, TSubclassOf<AEBBullet> BulletClass, TArray<AActor*> IgnoredActors, float MaxTime, float Step) const {
}

void UEBBarrel::NextBullet() {
}

void UEBBarrel::InitialBulletTransform_Implementation(FVector InLocation, FVector InDirection, FVector& OutLocation, FVector& OutDirection) {
}

int32 UEBBarrel::GetAmmoCount(bool CountChambered) const {
    return 0;
}

TArray<TSubclassOf<AEBBullet>> UEBBarrel::GetAmmo(bool CountChambered) const {
    return TArray<TSubclassOf<AEBBullet>>();
}

void UEBBarrel::GatlingSpool_Implementation(bool Spool) {
}
bool UEBBarrel::GatlingSpool_Validate(bool Spool) {
    return true;
}

void UEBBarrel::FireSingleBullet(ACharacter* Instigator, FVector Location, FVector Aim) {
}

void UEBBarrel::ClientAim_Implementation(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim) {
}
bool UEBBarrel::ClientAim_Validate(FVector_NetQuantize NewLocation, FVector_NetQuantizeNormal NewAim) {
    return true;
}

void UEBBarrel::Charge_Implementation() {
}
bool UEBBarrel::Charge_Validate() {
    return true;
}

void UEBBarrel::CalculateAimDirectionFromLocation(TSubclassOf<AEBBullet> BulletClass, FVector StartLocation, FVector TargetLocation, FVector TargetVelocity, FVector& AimDirection, FVector& PredictedTargetLocation, FVector& PredictedIntersectionLocation, float& PredictedFlightTime, float& Error, float MaxTime, float Step, int32 NumIterations) const {
}

void UEBBarrel::CalculateAimDirection(TSubclassOf<AEBBullet> BulletClass, FVector TargetLocation, FVector TargetVelocity, FVector& AimDirection, FVector& PredictedTargetLocation, FVector& PredictedIntersectionLocation, float& PredictedFlightTime, float& Error, float MaxTime, float Step, int32 NumIterations) const {
}

void UEBBarrel::ApplyRecoil_Implementation(UPrimitiveComponent* Component, FVector InLocation, FVector Impulse) {
}

void UEBBarrel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UEBBarrel, FireMode);
    DOREPLIFETIME(UEBBarrel, ShootingBlocked);
    DOREPLIFETIME(UEBBarrel, Ammo);
    DOREPLIFETIME(UEBBarrel, CycleAmmoCount);
    DOREPLIFETIME(UEBBarrel, CycleAmmoPos);
    DOREPLIFETIME(UEBBarrel, ChamberedBullet);
    DOREPLIFETIME(UEBBarrel, Shooting);
    DOREPLIFETIME(UEBBarrel, Spooling);
}


