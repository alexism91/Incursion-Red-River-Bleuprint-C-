#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDrawDebugTrace -FallbackName=EDrawDebugTrace
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EMovementMode -FallbackName=EMovementMode
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETraceTypeQuery -FallbackName=ETraceTypeQuery
#include "EIRRTraversalAction.h"
#include "IRRTraversalWallInteractionResults.h"
#include "IRRTraversalSystemComponent.generated.h"

class ACharacter;
class UCharacterMovementComponent;
class UIRRTraversalActionDataAsset;
class UMotionWarpingComponent;
class UNinjaInputManagerComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRTRAVERSAL_API UIRRTraversalSystemComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCheck;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpTrackingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallTraceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallTraceWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WallTraceIteration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallTraceAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WallTraceDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VaultMaxDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VaultMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VaultClearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VaultDepthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIRRTraversalActionDataAsset*> TraversalActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacyWallTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> WallTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSweepTraversalPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurrentAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastAccelerationDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLocallyControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTraversing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* CharacterRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharacterMovementComponent* MovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNinjaInputManagerComponent* InputManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMotionWarpingComponent* MotionWarpingComponent;
    
    UIRRTraversalSystemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateMotionWarpTargets(FIRRTraversalWallInteractionResults Interaction, UIRRTraversalActionDataAsset* TraversalAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TryTakeTraversalAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TryFindTraversalAction(FIRRTraversalWallInteractionResults Interaction, EIRRTraversalAction Action, UIRRTraversalActionDataAsset*& TraversalAction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TraceForWall(FVector Position, FVector Direction, float Height, int32 Iteration, bool bTraceComplex, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, FIRRTraversalWallInteractionResults& InteractionResults, EIRRTraversalAction& ActionResult, UIRRTraversalActionDataAsset*& TraversalAction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ResetMotionWarping_Server(TEnumAsByte<EMovementMode> MovementMode);
    
    UFUNCTION(BlueprintCallable)
    void ResetMotionWarping_Networked(TEnumAsByte<EMovementMode> MovementMode);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ResetMotionWarping_MC(TEnumAsByte<EMovementMode> MovementMode);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ResetMotionWarping(TEnumAsByte<EMovementMode> MovementMode);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void PrepareMotionWarping_Server();
    
    UFUNCTION(BlueprintCallable)
    void PrepareMotionWarping_Networked();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PrepareMotionWarping_MC();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PrepareMotionWarping();
    
    UFUNCTION(BlueprintCallable)
    void OnJumped();
    
    UFUNCTION(BlueprintCallable)
    void OnCharacterMovementUpdated(float DeltaSeconds, FVector OldLocation, FVector OldVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanWallTrace(FVector Direction);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void AddMotionWarpingTarget_Server(FName TargetName, FVector TargetLocation, FRotator TargetRotation);
    
    UFUNCTION(BlueprintCallable)
    void AddMotionWarpingTarget_Networked(FName TargetName, FVector TargetLocation, FRotator TargetRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddMotionWarpingTarget(FName TargetName, FVector TargetLocation, FRotator TargetRotation);
    
};

