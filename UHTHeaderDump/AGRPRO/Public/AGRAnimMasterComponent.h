#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "EAGR_AimOffsetClamp.h"
#include "EAGR_AimOffsets.h"
#include "EAGR_RotationMethod.h"
#include "OnFirstPersonDelegate.h"
#include "OnPoseChangedDelegate.h"
#include "AGRAnimMasterComponent.generated.h"

class ACharacter;
class UCharacterMovementComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class AGRPRO_API UAGRAnimMasterComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BasePose, meta=(AllowPrivateAccess=true))
    FGameplayTag BasePose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_OverlayPose, meta=(AllowPrivateAccess=true))
    FGameplayTag OverlayPose;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPoseChanged OnBasePoseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPoseChanged OnOverlayPoseChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstPerson;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AimOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CharacterOldVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PhysicalAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativePhysicalAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToJumpApex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInAir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AnimModTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAGR_RotationMethod RotationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnStartAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnStopTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAGR_AimOffsets AimOffsetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAGR_AimOffsetClamp AimOffsetBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CameraBased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AimSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LookAtSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* OwningCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* OwnerMovementComponent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFirstPerson OnFirstPerson;
    
    UAGRAnimMasterComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void TurnInPlaceTick();
    
    UFUNCTION(BlueprintCallable)
    void SetupRotation(const EAGR_RotationMethod InRotationMethod, const float InRotationSpeed, const float InTurnStartAngle, const float InTurnStopTolerance);
    
    UFUNCTION(BlueprintCallable)
    void SetupOverlayPose(FGameplayTag InOverlayPose);
    
    UFUNCTION(BlueprintCallable)
    void SetupFpp(bool bInFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void SetupBasePose(FGameplayTag InBasePose);
    
    UFUNCTION(BlueprintCallable)
    void SetupAimOffset(const EAGR_AimOffsets InAimOffsetType, const EAGR_AimOffsetClamp InAimBehavior, const float InAimClamp, const bool InCameraBased, const FName InAimSocketName, const FName InLookAtSocketName);
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetupAimOffset(const EAGR_AimOffsets InAimOffsetType, const EAGR_AimOffsetClamp InAimBehavior);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetRotation(const EAGR_RotationMethod InRotationMethod, const float InRotationSpeed, const float InTurnStartAngle, const float InTurnStopTolerance);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetOverlayPose(const FGameplayTag InOverlayPose);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetLookAt(const FVector LookAt);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetBasePose(const FGameplayTag InBasePose);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetAimOffset(const FRotator InAimOffset);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChangeRotation(const EAGR_RotationMethod InRotationMethod);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerChangeAimOffset(const EAGR_AimOffsets InAimOffsetType);
    
public:
    UFUNCTION(BlueprintCallable)
    bool RemoveTag(FGameplayTag InTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_RotationSpeed();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RotationMethod();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_OverlayPose(const FGameplayTag OldValue) const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BasePose(const FGameplayTag OldValue) const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMultiSetLookAt(const FVector LookAt);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void NetMultiSetAimOffset(const FRotator InAimOffset);
    
public:
    UFUNCTION(BlueprintCallable)
    void MovementDataTick();
    
    UFUNCTION(BlueprintCallable)
    void FallTick();
    
    UFUNCTION(BlueprintCallable)
    void ChangeRotation(const EAGR_RotationMethod InRotationMethod);
    
    UFUNCTION(BlueprintCallable)
    void ChangeAimOffset(const EAGR_AimOffsets InAimOffsetType);
    
    UFUNCTION(BlueprintCallable)
    void AimTick();
    
    UFUNCTION(BlueprintCallable)
    void AddTag(FGameplayTag InTag);
    
};

