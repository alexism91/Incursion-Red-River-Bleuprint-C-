#include "LPSPWeapon.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ArrowComponent -FallbackName=ArrowComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "Templates/SubclassOf.h"

ALPSPWeapon::ALPSPWeapon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
    this->Mesh = (USkeletalMeshComponent*)RootComponent;
    this->Muzzles = CreateDefaultSubobject<USceneComponent>(TEXT("Muzzles"));
    this->Scopes = CreateDefaultSubobject<USceneComponent>(TEXT("Scopes"));
    this->Lasers = CreateDefaultSubobject<USceneComponent>(TEXT("Lasers"));
    this->Magazines = CreateDefaultSubobject<USceneComponent>(TEXT("Magazines"));
    this->Grips = CreateDefaultSubobject<USceneComponent>(TEXT("Grips"));
    this->Defaults = CreateDefaultSubobject<USceneComponent>(TEXT("Defaults"));
    this->Eject = CreateDefaultSubobject<UArrowComponent>(TEXT("Eject"));
    this->Texture = NULL;
    this->Instance = NULL;
    this->MeleeAdditiveMontage = NULL;
    this->LandingOffset = -1.00f;
    this->Defaults->SetupAttachment(RootComponent);
    this->Eject->SetupAttachment(RootComponent);
    this->Grips->SetupAttachment(RootComponent);
    this->Lasers->SetupAttachment(RootComponent);
    this->Magazines->SetupAttachment(RootComponent);
    this->Muzzles->SetupAttachment(RootComponent);
    this->Scopes->SetupAttachment(RootComponent);
}

bool ALPSPWeapon::TryGetScope(ALPSPScope*& Scope) {
    return false;
}

bool ALPSPWeapon::TryGetMuzzle(ALPSPMuzzle*& Muzzle) {
    return false;
}

bool ALPSPWeapon::TryGetMag(ALPSPMagazine*& Mag) {
    return false;
}

bool ALPSPWeapon::TryGetLaser(ALPSPLaser*& Laser) {
    return false;
}

bool ALPSPWeapon::TryGetGrip(ALPSPGrip*& Grip) {
    return false;
}

bool ALPSPWeapon::TryGetAttachment(TSubclassOf<ALPSPAttachment> Class, ALPSPAttachment*& OutAttachment) {
    return false;
}

FLinearColor ALPSPWeapon::GetTextureTint() const {
    return FLinearColor{};
}

UTexture* ALPSPWeapon::GetTexture() const {
    return NULL;
}

USkeletalMeshComponent* ALPSPWeapon::GetMesh() const {
    return NULL;
}

float ALPSPWeapon::GetLandingOffset() const {
    return 0.0f;
}

TSubclassOf<UAnimInstance> ALPSPWeapon::GetInstance() const {
    return NULL;
}

TArray<ALPSPAttachment*> ALPSPWeapon::GetAttachments() const {
    return TArray<ALPSPAttachment*>();
}


