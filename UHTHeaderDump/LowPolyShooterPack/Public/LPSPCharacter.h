#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "ELPSPWeaponHolsterState.h"
#include "LPSPGameAbility.h"
#include "Templates/SubclassOf.h"
#include "LPSPCharacter.generated.h"

class ALPSPLaser;
class ALPSPMagazine;
class ALPSPMuzzle;
class ALPSPScope;
class ALPSPWeapon;
class UAnimMontage;
class UCameraComponent;
class USkeletalMeshComponent;
class USpringArmComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class LOWPOLYSHOOTERPACK_API ALPSPCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThirdPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstPersonOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewScaleFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GrenadeThrowMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* GrenadeThrowAdditiveMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MeleeMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* MeleeAdditiveMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HorizontalSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BackwardsSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MappedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRunning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALPSPScope* Scope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALPSPMagazine* Magazine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALPSPLaser* Laser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALPSPMuzzle* Muzzle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Movement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Look;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* Spring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* Camera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Arms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UpdateInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ALPSPWeapon> WeaponClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WeaponSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseWeaponCameraAnimation;
    
public:
    ALPSPCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void Update();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TryGetWeapon(ALPSPWeapon*& Value) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopGameAbility(FLPSPGameAbility Ability);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWeaponHolsterState(const TEnumAsByte<ELPSPWeaponHolsterState> Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayWeaponMontage(UAnimMontage* Montage) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThirdPerson() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRunning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    bool IsCrosshairVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAiming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<ELPSPWeaponHolsterState> GetWeaponHolsterState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALPSPWeapon* GetWeapon() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetViewLocation() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USpringArmComponent* GetSpring() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALPSPScope* GetScope() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitchAcceleration();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALPSPMuzzle* GetMuzzle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMappedSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALPSPMagazine* GetMagazine() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLook() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ALPSPLaser* GetLaser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCameraComponent* GetCamera() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetArms() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimSpeedMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimDuration() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintUpdate();
    
};

