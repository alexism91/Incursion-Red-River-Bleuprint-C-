#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "LPSPChildActorRef.h"
#include "LPSPRepresentation.h"
#include "Templates/SubclassOf.h"
#include "LPSPWeapon.generated.h"

class ALPSPAttachment;
class ALPSPGrip;
class ALPSPLaser;
class ALPSPMagazine;
class ALPSPMuzzle;
class ALPSPScope;
class UAnimInstance;
class UAnimMontage;
class UArrowComponent;
class USceneComponent;
class USkeletalMeshComponent;
class UTexture;

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPWeapon : public ALPSPRepresentation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Muzzles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scopes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Lasers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Magazines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Grips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Defaults;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* Eject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPChildActorRef EquippedMuzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPChildActorRef EquippedScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPChildActorRef EquippedLaser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPChildActorRef EquippedMagazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLPSPChildActorRef EquippedGrip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextureTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAnimInstance> Instance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MeleeAdditiveMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ALPSPAttachment*> Attachments;
    
public:
    ALPSPWeapon(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetScope(ALPSPScope*& Scope);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetMuzzle(ALPSPMuzzle*& Muzzle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetMag(ALPSPMagazine*& Mag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetLaser(ALPSPLaser*& Laser);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetGrip(ALPSPGrip*& Grip);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetAttachment(TSubclassOf<ALPSPAttachment> Class, ALPSPAttachment*& OutAttachment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetTextureTint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLandingOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UAnimInstance> GetInstance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<ALPSPAttachment*> GetAttachments() const;
    
};

