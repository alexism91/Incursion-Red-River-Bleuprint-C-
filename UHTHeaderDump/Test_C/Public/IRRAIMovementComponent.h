#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "AIMovementParams.h"
#include "AdvancedMovementComponent.h"
#include "EIRRBodyRotationMode.h"
#include "EIRRMovementStance.h"
#include "EIRRTurnSpeedPreset.h"
#include "IRROffMeshRecoveryFailedSignatureDelegate.h"
#include "IRRTurnParams.h"
#include "IRRUpperBodyStanceChangedSignatureDelegate.h"
#include "IRRUpperBodyStanceDef.h"
#include "IRRAIMovementComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIMovementComponent : public UAdvancedMovementComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROffMeshRecoveryFailedSignature OnOffMeshRecoveryFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRUpperBodyStanceChangedSignature OnUpperBodyStanceChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTurnInertia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSmoothingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIRRTurnSpeedPreset, FIRRTurnParams> TurnPresetMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRBodyRotationMode BodyRotationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnStartAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnStopTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AtAngleMoveSpeedThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSprintPivot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintPivotMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintPivotExitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintPivotTurnSmoothingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintPivotMaxTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintPivotSpeedClamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SprintPivotTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableCornerSpeedScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerSlowStartAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerSlowEndAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerMinSpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerSlowInDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerSlowOutDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CornerScaleInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSweepSpeedScaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSweepRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepEngageDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepMinPivotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepMinSinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepVelocityMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SweepScaleInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinAchievableSprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockLeanWhileSprinting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PostSprintLeanCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeCrouchInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftStopBrakingScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftStopEndSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftStopMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableOffMeshRecovery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffMeshRecoveryInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffMeshRecoveryMovingInputScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffMeshRecoveryMaxDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffMeshRecoveryRetryCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIRRMovementStance, FAIMovementParams> MovementParamsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRUpperBodyStanceDef> UpperBodyStances;
    
public:
    UIRRAIMovementComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantsAnySprint() const;
    
    UFUNCTION(BlueprintCallable)
    void StartSoftStop();
    
    UFUNCTION(BlueprintCallable)
    void SetTurnSpeedPreset(EIRRTurnSpeedPreset Preset);
    
    UFUNCTION(BlueprintCallable)
    void SetSweepPivot(const FVector& WorldPivot);
    
    UFUNCTION(BlueprintCallable)
    void SetSprintIntent(bool bSprint);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementParams(const FAIMovementParams& MovementParams);
    
    UFUNCTION(BlueprintCallable)
    bool RequestUpperBodyStance(FGameplayTag StanceTag);
    
    UFUNCTION(BlueprintCallable)
    bool RequestCrouch(bool bCrouch, bool bForce);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSprintPivotActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSoftStopping() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOffMeshRecovering() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBodyTurnSettled(const float MaxTurnSpeedDegPerSec) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAtAngleRotationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSweepPivot() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMovementStanceChanged(EIRRMovementStance NewStance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetUpperBodyStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSweepSpeedScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSprintIntent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDesiredYawError() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCornerSpeedScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetAimingStanceTag() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearTurnSpeedPreset();
    
    UFUNCTION(BlueprintCallable)
    void ClearSweepPivot();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanFireFromStance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEngageSprint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanChangeCrouch() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelSoftStop();
    
};

