#include "Test_CCharacter.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CameraComponent -FallbackName=CameraComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=HeadMountedDisplay -ObjectName=MotionControllerComponent -FallbackName=MotionControllerComponent

ATest_CCharacter::ATest_CCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
    const FProperty* p_FirstPersonCameraComponent_Parent = GetClass()->FindPropertyByName("FirstPersonCameraComponent");
    this->FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
    this->FP_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
    this->VR_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("VR_Gun"));
    const FProperty* p_R_MotionController_Parent = GetClass()->FindPropertyByName("R_MotionController");
    this->VR_MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("VR_MuzzleLocation"));
    this->FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
    this->R_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("R_MotionController"));
    this->L_MotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("L_MotionController"));
    this->wMainMenu = NULL;
    this->BaseTurnRate = 45.00f;
    this->BaseLookUpRate = 45.00f;
    this->ProjectileClass = NULL;
    this->FireSound = NULL;
    this->FireAnimation = NULL;
    this->bUsingMotionControllers = false;
    this->Test = 10;
    this->FP_Gun->SetupAttachment(RootComponent);
    this->FP_MuzzleLocation->SetupAttachment(FP_Gun);
    this->FirstPersonCameraComponent->SetupAttachment(RootComponent);
    this->L_MotionController->SetupAttachment(RootComponent);
    this->Mesh1P->SetupAttachment(p_FirstPersonCameraComponent_Parent->ContainerPtrToValuePtr<UCameraComponent>(this));
    this->R_MotionController->SetupAttachment(RootComponent);
    this->VR_Gun->SetupAttachment(p_R_MotionController_Parent->ContainerPtrToValuePtr<UMotionControllerComponent>(this));
    this->VR_MuzzleLocation->SetupAttachment(VR_Gun);
}

void ATest_CCharacter::PlayAnimationServer_Implementation(UAnimMontage* Montage, FRotator SpawnRotation, FVector SpawnLocation) {
}

void ATest_CCharacter::PlayAnimationMulticast_Implementation(UAnimMontage* Montage, FRotator SpawnRotation, FVector SpawnLocation) {
}


