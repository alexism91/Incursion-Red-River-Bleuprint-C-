#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ExtractionCountdownUpdatedDelegate.h"
#include "PlayersAliveUpdatedDelegate.h"
#include "PlayersInExtractionZoneUpdatedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IRRExtractionManager.generated.h"

class AActor;
class ACharacter;
class UIRRMissionEvent;
class UUserWidget;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRExtractionManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> ExtractionWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRMissionEvent*> OnExtractedEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultExtractionCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersInExtractionZone, meta=(AllowPrivateAccess=true))
    int32 PlayersInExtractionZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayersAlive, meta=(AllowPrivateAccess=true))
    int32 PlayersAlive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtractionCountdown, meta=(AllowPrivateAccess=true))
    int32 ExtractionCountdown;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersInExtractionZoneUpdated OnPlayersInExtractionZoneUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayersAliveUpdated OnPlayersAliveUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FExtractionCountdownUpdated OnExtractionCountdownUpdated;
    
    UIRRExtractionManager(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersInExtractionZone();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayersAlive();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtractionCountdown();
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerPawnsUpdated(const TArray<AActor*>& Pawns);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ExtractionTimerFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_ExitExtractionZone_Local();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_EnterExtractionZone_Local();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ForceExtraction();
    
    UFUNCTION(BlueprintCallable)
    void ExtractionTimerFinished();
    
    UFUNCTION(BlueprintCallable)
    void ExitExtractionZone(ACharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void EnterExtractionZone(ACharacter* Player);
    
    UFUNCTION(BlueprintCallable)
    void CountdownTimer();
    
};

