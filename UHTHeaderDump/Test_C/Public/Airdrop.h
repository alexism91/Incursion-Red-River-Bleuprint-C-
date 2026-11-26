#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRMissionSystem -ObjectName=IRROperationInterface -FallbackName=IRROperationInterface
#include "AirdropEventDelegate.h"
#include "AirdropStateChangedEventDelegate.h"
#include "EAirdropState.h"
#include "Templates/SubclassOf.h"
#include "Airdrop.generated.h"

class UBillboardComponent;
class UCurveFloat;
class UIRRNavObstacleComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AAirdrop : public AActor, public IIRROperationInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> PayloadClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector AimLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FVector DropLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> AlternateDropLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WarningDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ApproachHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LandingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallAngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceUpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceHorizontalKeep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceRestitution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceLinearDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BounceAngularDamping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SettleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SettleHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* FallHeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDropDriftRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDespawnPayloadOnDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnchorActorToPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDespawnAfterLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnMinDistanceToAnyPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDespawnRequireOutOfSight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnSightProbeHalfHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnSightProbeRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DespawnObserverFactionFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DespawnPollInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDespawnWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EAirdropState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float StateStartServerTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* Payload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float AbortedHeightAboveDrop;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirdropStateChangedEvent OnAirdropStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirdropEvent OnAirdropWarning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirdropEvent OnAirdropStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirdropEvent OnAirdropLanding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirdropEvent OnAirdropLanded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirdropEvent OnAirdropAborted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAirdropEvent OnAirdropDespawned;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* Billboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRNavObstacleComponent* NavObstacle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> TriedDropLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PlacedAimLocation;
    
public:
    AAirdrop(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool StartAirdrop();
    
    UFUNCTION(BlueprintCallable)
    bool SetDropLocation(FVector NewDropLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugDraw(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool ResetAirdrop();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_State();
    
    UFUNCTION(BlueprintCallable)
    void OnFallHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnDespawnSightCheckComplete(const TArray<FVector>& ValidLocations, const TArray<int32>& UnseenCandidates);
    
public:
    UFUNCTION(BlueprintCallable)
    void MarkAirdropLooted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAirdropWarning();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAirdropStateChanged(EAirdropState OldState, EAirdropState NewState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAirdropStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAirdropLanding();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAirdropLanded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAirdropDespawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnAirdropAborted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWarning() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLooted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLanding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAir() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDespawned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAirdropActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAborted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLanded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStateElapsed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPayloadTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFallProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDropLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAirdropState GetAirdropState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAimLocation() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UPrimitiveComponent* FindSimulatablePrimitive(AActor* Actor) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void DespawnPayload();
    
    UFUNCTION(BlueprintCallable)
    void DespawnAirdrop();
    
    UFUNCTION(BlueprintCallable)
    void AbortAirdrop();
    

    // Fix for true pure virtual functions not being implemented
};

