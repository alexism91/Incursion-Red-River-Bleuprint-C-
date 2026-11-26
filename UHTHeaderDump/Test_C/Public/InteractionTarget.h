#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRObjectReplicationComponent -FallbackName=IRRObjectReplicationComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRSignificanceSystem -ObjectName=IRRSignificanceInterface -FallbackName=IRRSignificanceInterface
#include "ContainerItem.h"
#include "EInteractionState.h"
#include "InteractionTargetInterface.h"
#include "OnInteractionFinishedDelegate.h"
#include "OnInteractionInProgressChangedDelegate.h"
#include "OnInteractionStartedDelegate.h"
#include "OnInteractionStateUpdatedDelegate.h"
#include "OnInteractionTargetEnabledDelegate.h"
#include "OnInteractionTargetOverlappedDelegate.h"
#include "Templates/SubclassOf.h"
#include "InteractionTarget.generated.h"

class AActor;
class APlayerController;
class UInteractionOption;
class UPrimitiveComponent;
class USphereComponent;
class UUserWidget;
class UWidgetComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UInteractionTarget : public UIRRObjectReplicationComponent, public IInteractionTargetInterface, public IIRRSignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* TargetMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Enabled, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> TargetWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MarkerComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MarkerSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterInteractionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerInteractionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractionOption*> InteractionOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInteractionOption*> DisabledOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractionState InteractionState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionOption* ActiveInteractionOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInteractionOption* DisabledInteractionOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* LocInteractingActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* SphereComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShareCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TabCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem InteractionItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 InteractingActorCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* ExclusiveInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ActiveInteractors, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ActiveInteractors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* PredictedInteractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* InProgressInteractor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionTargetEnabled OnInteractionTargetEnabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionStarted OnInteractionStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionFinished OnInteractionFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionStateUpdated OnInteractionStateUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionTargetOverlapped OnInteractionTargetOverlapped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnInteractionInProgressChanged OnInteractionInProgressChanged;
    
    UInteractionTarget(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UpdateMarker();
    
    UFUNCTION(BlueprintCallable)
    bool UpdateInteractionTarget(APlayerController* Player);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInteractionState(EInteractionState NewState);
    
    UFUNCTION(BlueprintCallable)
    void UpdateInteractionProgress();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void UpdateInteractingActorCounter(bool bIncrement);
    
    UFUNCTION(BlueprintCallable)
    void UpdateCollision(bool bEnableCollision);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleInteractionTarget(bool Activate);
    
    UFUNCTION(BlueprintCallable)
    void StartInteraction_Delayed(AActor* Player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool StartInteraction(AActor* Player);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SimulateInteraction(AActor* Player);
    
    UFUNCTION(BlueprintCallable)
    void SimulateBeginOverlap(AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void SetupWidgetComponent();
    
    UFUNCTION(BlueprintCallable)
    void RemoveInteractionTarget();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Enabled();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ActiveInteractors();
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveInteractorDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetComponent* GetWidgetComponent() const;
    
    UFUNCTION(BlueprintCallable)
    FVector GetMarkerPosition();
    
    UFUNCTION(BlueprintCallable)
    EInteractionState GetInteractionState();
    
    UFUNCTION(BlueprintCallable)
    UInteractionOption* GetInteractionOption();
    
    UFUNCTION(BlueprintCallable)
    float GetInnerInteractionRadius();
    
    UFUNCTION(BlueprintCallable)
    void FinishInteraction_Ongoing(bool success);
    
    UFUNCTION(BlueprintCallable)
    void FinishInteraction(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void AddInteractionTarget();
    

    // Fix for true pure virtual functions not being implemented
};

