#include "QUA_Character.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessComponent -FallbackName=PostProcessComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SpringArmComponent -FallbackName=SpringArmComponent
#include "Net/UnrealNetwork.h"

AQUA_Character::AQUA_Character(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->Helmet1 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet1"));
    this->Helmet2 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet2"));
    this->Helmet3 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet3"));
    this->Helmet4 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Helmet4"));
    this->Shirt = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Shirt"));
    this->Pants = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Pants"));
    this->Boots = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Boots"));
    this->Gloves1 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gloves1"));
    this->Gloves2 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Gloves2"));
    this->Backpack1 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Backpack1"));
    this->Backpack2 = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Backpack2"));
    this->Vest = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vest"));
    this->Vest_Collar = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vest_Collar"));
    this->Vest_Shoulder_R = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vest_Shoulder_R"));
    this->Vest_Shoulder_L = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vest_Shoulder_L"));
    this->Vest_Bottom = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vest_Bottom"));
    this->Vest_Outfit = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Vest_Outfit"));
    this->Decals = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Decals"));
    this->Radio = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Radio"));
    this->Holster = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Holster"));
    this->Belt = NULL;
    this->EyeWear = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EyeWear"));
    this->EarWear = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("EarWear"));
    this->FirstPerson_Arms = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("First Person Arms"));
    this->Knieepad_R = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knieepad_R"));
    this->Knieepad_L = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Knieepad_L"));
    this->LowHealthPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("LowHealthPostProcessComponent"));
    this->FlyByPostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("FlyByPostProcessComponent"));
    this->DefaultHorizontalMultiplier = 0.70f;
    this->DefaultBackwardMultiplier = 0.50f;
    this->LeanValue = 0.00f;
    this->LeanChanged = false;
    this->LeanChangeSpeed = 5.00f;
    this->DefaultTurnRate = 1.00f;
    this->DefaultLookUpRate = 1.00f;
    this->BaseMappingContext = NULL;
    this->BaseMappingPriority = 0;
    this->MovementAction = NULL;
    this->LookAction = NULL;
    this->LeanAction = NULL;
    this->FireAction = NULL;
    this->ReloadAction = NULL;
    this->HolsterAction = NULL;
    this->AimAction = NULL;
    this->SneakAction = NULL;
    this->CrouchAction = NULL;
    this->RunAction = NULL;
    this->JumpAction = NULL;
    this->LeanActionToggle_L = NULL;
    this->LeanActionToggle_R = NULL;
    this->InteractAction = NULL;
    this->FreeLook = NULL;
    this->LandingVelocityMultiplier = 0.00f;
    this->LandingMinimumVelocity = 0.00f;
    this->PlayerInteractionDistance = 0.00f;
    this->CurrentTraceActor = NULL;
    this->InventoryOpeningTime = 0.00f;
    this->WeaponBlockAlpha = 0.00f;
    this->ClippingDistance = 0.00f;
    this->AimOffset = 0.00f;
    this->AimStamina = 0.00f;
    this->EquippedWeapon = NULL;
    this->FirstPerson = false;
    this->TurnSpeedMultiplicator = 0.00f;
    this->PlayerController = NULL;
    this->WeaponWeightMultiplier = 1.00f;
    this->ErgonomicsMultiplier = 1.00f;
    this->CharacterWeightMultiplierCurve = NULL;
    this->CustomTickRate = 0.50f;
    this->Backpack1->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Backpack2->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Boots->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Decals->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->EarWear->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->EyeWear->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->FirstPersonCameraComponent->SetupAttachment(SpringArm);
    this->FirstPerson_Arms->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Gloves1->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Gloves2->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Helmet1->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Helmet2->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Helmet3->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Helmet4->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Holster->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Knieepad_L->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Knieepad_R->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Pants->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Radio->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Shirt->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->SpringArm->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Vest->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Vest_Bottom->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Vest_Collar->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Vest_Outfit->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Vest_Shoulder_L->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
    this->Vest_Shoulder_R->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponent>(this));
}

void AQUA_Character::UpdateWeaponWeightMultiplier(float CenterOfMass) {
}

void AQUA_Character::UpdateGameplayTags_Implementation(const FGameplayTagContainer ToAddAbilities, const FGameplayTagContainer ToRemoveAbilities) {
}

void AQUA_Character::UpdateFOV() {
}

void AQUA_Character::UpdateErgonomics() {
}

void AQUA_Character::UpdateAimSpeedMultiplier() {
}


void AQUA_Character::SucceedMission_Implementation() {
}

void AQUA_Character::StopMontageServer_Implementation(UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, AActor* Weapon, bool All) {
}

void AQUA_Character::StopMontageMulticast_Implementation(UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, AActor* Weapon, bool All) {
}

void AQUA_Character::StopGameAbility(FLPSPGameAbility Ability) {
}

void AQUA_Character::SneakStop() {
}

void AQUA_Character::SneakStart() {
}

void AQUA_Character::SetMovementSpeed_Implementation(int32 Speed) {
}


void AQUA_Character::RunStop() {
}

void AQUA_Character::RunStart() {
}

void AQUA_Character::ResetInventory_Implementation() {
}


void AQUA_Character::ReplicateAimOffset_Implementation(float NewAimOffset) {
}

void AQUA_Character::ReplicateAbilities_Server_Implementation(FGameplayTagContainer RepAbilities) {
}

void AQUA_Character::ReplicateAbilities_Net_Implementation(FGameplayTagContainer RepAbilities) {
}



void AQUA_Character::PlayAnimationServer_Implementation(FName Group, FName MontageSection, UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, float PlayRate, FQUA_BlendSetting BlendInSetting, FQUA_BlendSetting BlendOutSetting, bool StopPreviousMontage, bool AdjustWeaponMontagePlayRate) {
}

void AQUA_Character::PlayAnimationMulticast_Implementation(FName Group, FName MontageSection, UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, float PlayRate, FQUA_BlendSetting BlendInSetting, FQUA_BlendSetting BlendOutSetting, bool StopPreviousMontage, bool AdjustWeaponMontagePlayRate) {
}


void AQUA_Character::ModifyStatItem_Implementation(FQUA_StatItem NewStatValue) {
}

void AQUA_Character::ModifyLeanInputServer_Implementation(float Value) {
}

void AQUA_Character::MakeInvulnerable_Implementation(bool Trigger) {
}


void AQUA_Character::KillPlayer_Implementation() {
}

void AQUA_Character::InspectStop() {
}


TArray<FQUA_StatItem> AQUA_Character::GetStats_Implementation() {
    return TArray<FQUA_StatItem>();
}

USkeletalMeshComponent* AQUA_Character::GetMeshByName(const FString& Name) {
    return NULL;
}

float AQUA_Character::GetCharacterStatByType_Implementation(EQUA_StatType StatType) {
    return 0.0f;
}


void AQUA_Character::CrouchStop() {
}

void AQUA_Character::CrouchStart() {
}



void AQUA_Character::AimStop() {
}

void AQUA_Character::AimStart() {
}

void AQUA_Character::AimReleased() {
}

void AQUA_Character::AimPressed() {
}

void AQUA_Character::AddMoney_Implementation(int32 Amount) {
}

void AQUA_Character::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AQUA_Character, LeanValue);
    DOREPLIFETIME(AQUA_Character, PlayerInteractionDistance);
    DOREPLIFETIME(AQUA_Character, AimOffset);
    DOREPLIFETIME(AQUA_Character, EquippedWeapon);
    DOREPLIFETIME(AQUA_Character, CharacterStats);
    DOREPLIFETIME(AQUA_Character, CurrentAbilityTags);
    DOREPLIFETIME(AQUA_Character, WeaponWeightMultiplier);
}


