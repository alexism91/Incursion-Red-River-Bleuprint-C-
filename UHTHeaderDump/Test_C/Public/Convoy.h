#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=EAIOptimizationLevel -FallbackName=EAIOptimizationLevel
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRMissionSystem -ObjectName=IRROperationInterface -FallbackName=IRROperationInterface
#include "AirstrikeTargetInterface.h"
#include "ConvoyEscortSpawnSettings.h"
#include "ConvoyEventDelegate.h"
#include "ConvoyVehicle.h"
#include "ConvoyVehicleEventDelegate.h"
#include "ConvoyVehicleSlot.h"
#include "IRRElementRouteLeader.h"
#include "Templates/SubclassOf.h"
#include "Convoy.generated.h"

class AConvoyEscortSpawnPoint;
class AConvoyRoute;
class AIRRAIBaseCharacter;
class AIRRMovementGroup;
class UBillboardComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AConvoy : public AActor, public IIRROperationInterface, public IAirstrikeTargetInterface, public IIRRElementRouteLeader {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AConvoyRoute* Route;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AConvoyRoute*> AlternateRoutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConvoyVehicleSlot> Formation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CruiseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartLeadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopLeadAtRouteEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnVehiclesOverFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDespawnVehiclesOnDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnchorActorToColumnCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopWhenLeadDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProbeSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugConvoyState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugEscortFormation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIRRMovementGroup> EscortGroupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortAnchorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldForEngagedEscorts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegroupAfterCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegroupSlotDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RegroupTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortKeepOutPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortKeepOutLeadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bKeepEscortsOutOfColumnGaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCapEscortOptimization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIOptimizationLevel EscortMaxOptimizationLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHuntObserverOnStrike;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObserverEstimateErrorFraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObserverEstimateMinError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ObserverEstimateMaxError;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyEscortSpawnSettings EscortSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnEscortsOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortSpawnHoldTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEscortSpawnPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIRRMovementGroup* EscortGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EscortSpeedCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEscortEngaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEscortRegrouping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bEscortsBrokeOff;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AConvoyEscortSpawnPoint* EscortSpawnPoint;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopForBlockedPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopForAnyPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStopForEscorts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockDetectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockDetectionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockReactionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockApproachReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockApproachPrediction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmergencyDeceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HardStopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockClearDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockCheckInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxBlockHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPredictLeadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionCorrectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPredictionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PredictionSnapDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeriveVehiclePositionsOnClients;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LeadDistanceAlongSpline, meta=(AllowPrivateAccess=true))
    float LeadDistanceAlongSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PredictedLeadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float CurrentSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FConvoyVehicle> Vehicles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bReachedEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bBlocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* BlockingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bWipedOutByAirstrike;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyEvent OnConvoyStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyEvent OnConvoyReachedEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyEvent OnConvoyStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyVehicleEvent OnConvoyBlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyEvent OnConvoyResumed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyVehicleEvent OnConvoyVehicleDestroyed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyEvent OnConvoyWipedOut;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyEvent OnConvoyWipedOutByAirstrike;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConvoyEvent OnEscortsBrokeOff;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AConvoyRoute*> TriedRoutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AConvoyRoute* PlacedRoute;
    
public:
    AConvoy(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void StopConvoy();
    
    UFUNCTION(BlueprintCallable)
    bool StartConvoy();
    
    UFUNCTION(BlueprintCallable)
    int32 SpawnEscortsInFormation();
    
    UFUNCTION(BlueprintCallable)
    bool SetRoute(AConvoyRoute* NewRoute);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_LeadDistanceAlongSpline();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEscortSpawned(AIRRAIBaseCharacter* Bot, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnEscortsBrokeOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConvoyWipedOutByAirstrike();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConvoyWipedOut();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConvoyVehicleDestroyed(AActor* Vehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConvoyStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConvoyStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConvoyResumed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConvoyReachedEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnConvoyBlocked(AActor* Blocker);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWipedOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasReachedEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRouteProgress() const;
    
    UFUNCTION(BlueprintCallable)
    AIRRMovementGroup* GetOrCreateEscortGroup();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLeadVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeadDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFormationLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetColumnCenterTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetColumnCenterDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetBlockingActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAliveVehicleCount() const;
    
    UFUNCTION(BlueprintCallable)
    void DespawnVehicles();
    

    // Fix for true pure virtual functions not being implemented
};

