#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Character -FallbackName=Character
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VectorSpringState -FallbackName=VectorSpringState
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=LowPolyShooterPack -ObjectName=LPSPGameAbility -FallbackName=LPSPGameAbility
#include "AbilitiesInterface.h"
#include "EQUA_PlayerSlots.h"
#include "EQUA_StatType.h"
#include "JumpViewmodelAnimationSettings.h"
#include "QUA_Abilities.h"
#include "QUA_BlendSetting.h"
#include "QUA_CharacterAudio.h"
#include "QUA_ControllerSettings.h"
#include "QUA_EquipAnimation.h"
#include "QUA_StatItem.h"
#include "QUA_WeaponInfluenceSettings.h"
#include "QuarantineInterface.h"
#include "SpringInterpVector.h"
#include "QUA_Character.generated.h"

class AActor;
class APlayerController;
class AQUA_Weapon;
class UAnimMontage;
class UCameraComponent;
class UCurveFloat;
class UInputAction;
class UInputMappingContext;
class UPostProcessComponent;
class USkeletalMeshComponent;
class USpringArmComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AQUA_Character : public ACharacter, public IQuarantineInterface, public IAbilitiesInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraComponent* FirstPersonCameraComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Helmet1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Helmet2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Helmet3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Helmet4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Shirt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Pants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Boots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Gloves1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Gloves2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Backpack1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Backpack2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Vest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Vest_Collar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Vest_Shoulder_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Vest_Shoulder_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Vest_Bottom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Vest_Outfit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Decals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Radio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Holster;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Belt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EyeWear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* EarWear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FirstPerson_Arms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Knieepad_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Knieepad_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* LowHealthPostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* FlyByPostProcessComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultHorizontalMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultBackwardMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float LeanValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LeanChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeanChangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultTurnRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultLookUpRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FreeLookOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputMappingContext* BaseMappingContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseMappingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* MovementAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* LookAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* LeanAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* FireAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* ReloadAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* HolsterAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* AimAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* SneakAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* CrouchAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* RunAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* JumpAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* LeanActionToggle_L;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* LeanActionToggle_R;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* InteractAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* FreeLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpViewmodelAnimationSettings JumpAnimationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpringInterpVector JumpingSpringSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewmodelJumpingLocationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorSpringState ViewmodelJumpingLocationSpringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewmodelJumpingRotationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorSpringState ViewmodelJumpingRotationSpringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewmodelFallingLocationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorSpringState ViewmodelFallingLocationSpringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewmodelFallingRotationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorSpringState ViewmodelFallingRotationSpringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewmodelLandingLocationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorSpringState ViewmodelLandingLocationSpringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewmodelLandingRotationTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVectorSpringState ViewmodelLandingRotationSpringState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingVelocityMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingMinimumVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float PlayerInteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CurrentTraceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InventoryOpeningTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeaponBlockAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClippingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimStamina;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_CharacterAudio CharacterAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AQUA_Weapon* EquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EQUA_PlayerSlots, FQUA_EquipAnimation> EquipAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FQUA_StatItem> CharacterStats;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CurrentAbilityTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_Abilities Abilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_ControllerSettings ControllerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeedMultiplicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APlayerController* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQUA_WeaponInfluenceSettings WeaponInfluenceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float WeaponWeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ErgonomicsMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CharacterWeightMultiplierCurve;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomTickRate;
    
public:
    AQUA_Character(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateWeaponWeightMultiplier(float CenterOfMass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateGameplayTags(const FGameplayTagContainer ToAddAbilities, const FGameplayTagContainer ToRemoveAbilities);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFOV();
    
    UFUNCTION(BlueprintCallable)
    void UpdateErgonomics();
    
    UFUNCTION(BlueprintCallable)
    void UpdateAimSpeedMultiplier();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TryInteract(bool DoublePress);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SucceedMission();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void StopMontageServer(UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, AActor* Weapon, bool All);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopMontageMulticast(UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, AActor* Weapon, bool All);
    
    UFUNCTION(BlueprintCallable)
    void StopGameAbility(FLPSPGameAbility Ability);
    
    UFUNCTION(BlueprintCallable)
    void SneakStop();
    
    UFUNCTION(BlueprintCallable)
    void SneakStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetMovementSpeed(int32 Speed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetInteractingActor(AActor* TracedActor);
    
    UFUNCTION(BlueprintCallable)
    void RunStop();
    
    UFUNCTION(BlueprintCallable)
    void RunStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestSwitchFireMode();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ReplicateAimOffset(float NewAimOffset);
    
public:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ReplicateAbilities_Server(FGameplayTagContainer RepAbilities);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ReplicateAbilities_Net(FGameplayTagContainer RepAbilities);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReloadStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReloadStart(bool Quick);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PlayAnimationServer(FName Group, FName MontageSection, UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, float PlayRate, FQUA_BlendSetting BlendInSetting, FQUA_BlendSetting BlendOutSetting, bool StopPreviousMontage, bool AdjustWeaponMontagePlayRate);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlayAnimationMulticast(FName Group, FName MontageSection, UAnimMontage* TPMontage, UAnimMontage* FPMontage, UAnimMontage* WeaponMontage, float PlayRate, FQUA_BlendSetting BlendInSetting, FQUA_BlendSetting BlendOutSetting, bool StopPreviousMontage, bool AdjustWeaponMontagePlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenInventoryProgress(float Percent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ModifyStatItem(FQUA_StatItem NewStatValue);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ModifyLeanInputServer(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void MakeInvulnerable(bool Trigger);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void MagInspectStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void KillPlayer();
    
    UFUNCTION(BlueprintCallable)
    void InspectStop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InspectStart();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FQUA_StatItem> GetStats();
    
    UFUNCTION(BlueprintCallable)
    USkeletalMeshComponent* GetMeshByName(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCharacterStatByType(EQUA_StatType StatType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Fire(bool Pressed);
    
    UFUNCTION(BlueprintCallable)
    void CrouchStop();
    
    UFUNCTION(BlueprintCallable)
    void CrouchStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClearInteractingActor();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AimTrigger(bool Start);
    
    UFUNCTION(BlueprintCallable)
    void AimStop();
    
    UFUNCTION(BlueprintCallable)
    void AimStart();
    
    UFUNCTION(BlueprintCallable)
    void AimReleased();
    
    UFUNCTION(BlueprintCallable)
    void AimPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddMoney(int32 Amount);
    

    // Fix for true pure virtual functions not being implemented
};

