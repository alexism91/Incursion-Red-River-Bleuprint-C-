#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PoseSnapshot -FallbackName=PoseSnapshot
#include "IRRDamageData.h"
#include "IRRRagdollCollisionSettings.h"
#include "IRRRagdollMovementSettings.h"
#include "IRRRagdollSettings.h"
#include "IRRRagdollSpringSettings.h"
#include "IRRRagdollComponent.generated.h"

class ACharacter;
class UAnimMontage;
class UCapsuleComponent;
class UCharacterMovementComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRRagdollComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnStopRagdollUpdate);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStopRagdollUpdate OnStopRagdollUpdateDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRRagdollSettings RagdollSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRRagdollCollisionSettings RagdollCollisionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRRagdollSpringSettings SpringSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRRagdollMovementSettings MovementSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector TargetRagdollLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RagdollTransform, meta=(AllowPrivateAccess=true))
    FTransform RagdollTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPoseSnapshot RagdollSnapshot;
    
public:
    UIRRRagdollComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateRagdollTransform();
    
    UFUNCTION(BlueprintCallable)
    void UpdateRagdollSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void StopRagdollUpdate();
    
    UFUNCTION(BlueprintCallable)
    void StopRagdollMovement();
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void Server_SetMeshLocationDuringRagdoll(const FVector& Vector);
    
public:
    UFUNCTION(BlueprintCallable)
    void RagdollStart(const FIRRDamageData& DamageData, bool bIsAIControlled);
    
    UFUNCTION(BlueprintCallable)
    void RagdollEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_RagdollTransform();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RagdollSnapshot();
    
    UFUNCTION(BlueprintCallable)
    void OnMovementModeChangedWhileRagdolled(ACharacter* InCharacter, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPoseSnapshot GetRagdollSnapshot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UAnimMontage* GetGetUpAnimation(bool bUp);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCharacterMovementComponent* GetCharacterMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCapsuleComponent* GetCapsuleComponent() const;
    
};

