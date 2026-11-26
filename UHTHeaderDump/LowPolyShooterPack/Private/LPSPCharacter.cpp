#include "LPSPCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent

ALPSPCharacter::ALPSPCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bThirdPerson = false;
    this->ViewInterpSpeed = 15.00f;
    this->ViewScaleFactor = 0.20f;
    this->GrenadeThrowMontage = NULL;
    this->GrenadeThrowAdditiveMontage = NULL;
    this->MeleeMontage = NULL;
    this->MeleeAdditiveMontage = NULL;
    this->HorizontalSpeedMultiplier = 0.80f;
    this->BackwardsSpeedMultiplier = 0.70f;
    this->MappedSpeed = 0.00f;
    this->bAiming = false;
    this->bRunning = false;
    this->bCrouching = false;
    this->Scope = NULL;
    this->Magazine = NULL;
    this->Laser = NULL;
    this->Muzzle = NULL;
    this->Spring = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    this->Arms = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Arms"));
    this->UpdateInterval = 0.01f;
    this->WeaponClass = NULL;
    this->WeaponSocket = TEXT("SOCKET_Weapon");
    this->bUseWeaponCameraAnimation = true;
    this->Arms->SetupAttachment(Camera);
    this->Camera->SetupAttachment(Spring);
    this->Spring->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void ALPSPCharacter::Update() {
}

bool ALPSPCharacter::TryGetWeapon(ALPSPWeapon*& Value) const {
    return false;
}

void ALPSPCharacter::StopGameAbility(FLPSPGameAbility Ability) {
}

void ALPSPCharacter::SetWeaponHolsterState(const TEnumAsByte<ELPSPWeaponHolsterState> Value) {
}

void ALPSPCharacter::PlayWeaponMontage(UAnimMontage* Montage) const {
}

bool ALPSPCharacter::IsThirdPerson() const {
    return false;
}

bool ALPSPCharacter::IsRunning() const {
    return false;
}

bool ALPSPCharacter::IsCrosshairVisible_Implementation() const {
    return false;
}

bool ALPSPCharacter::IsAiming() const {
    return false;
}

TEnumAsByte<ELPSPWeaponHolsterState> ALPSPCharacter::GetWeaponHolsterState() const {
    return Available;
}

ALPSPWeapon* ALPSPCharacter::GetWeapon() const {
    return NULL;
}

FVector ALPSPCharacter::GetViewLocation() const {
    return FVector{};
}

USpringArmComponent* ALPSPCharacter::GetSpring() const {
    return NULL;
}

ALPSPScope* ALPSPCharacter::GetScope() const {
    return NULL;
}

float ALPSPCharacter::GetPitchAcceleration() {
    return 0.0f;
}

ALPSPMuzzle* ALPSPCharacter::GetMuzzle() const {
    return NULL;
}

FVector2D ALPSPCharacter::GetMovement() const {
    return FVector2D{};
}

float ALPSPCharacter::GetMappedSpeed() const {
    return 0.0f;
}

ALPSPMagazine* ALPSPCharacter::GetMagazine() const {
    return NULL;
}

FVector2D ALPSPCharacter::GetLook() const {
    return FVector2D{};
}

ALPSPLaser* ALPSPCharacter::GetLaser() const {
    return NULL;
}

UCameraComponent* ALPSPCharacter::GetCamera() const {
    return NULL;
}

USkeletalMeshComponent* ALPSPCharacter::GetArms() const {
    return NULL;
}

float ALPSPCharacter::GetAimSpeedMultiplier() const {
    return 0.0f;
}

float ALPSPCharacter::GetAimDuration() const {
    return 0.0f;
}



