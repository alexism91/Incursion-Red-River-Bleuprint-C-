#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRActiveReinforcement.h"
#include "IRROnReinforcementBotSpawnedDelegate.h"
#include "IRROnReinforcementsFinishedDelegate.h"
#include "IRRReinforcementBots.h"
#include "IRRSpawnReinforcementSettings.h"
#include "IRRAISpawnDirectorSubsystem.generated.h"

class AActor;
class AIRRAIBaseCharacter;
class AUPSMovementGroup;

UCLASS(Blueprintable)
class TEST_C_API UIRRAISpawnDirectorSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnReinforcementBotSpawned OnReinforcementBotSpawned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnReinforcementsFinished OnReinforcementsFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FIRRActiveReinforcement> ActiveReinforcements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, FIRRReinforcementBots> ReinforcementBots;
    
public:
    UIRRAISpawnDirectorSubsystem();

    UFUNCTION(BlueprintCallable)
    void StopReinforcements(int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    int32 RequestReinforcementsWithSettings(FVector Origin, AActor* Initiator, const FIRRSpawnReinforcementSettings& Settings, AUPSMovementGroup* JoinGroup);
    
    UFUNCTION(BlueprintCallable)
    int32 RequestReinforcements(FVector Origin, AActor* Initiator, FName AllegianceId);
    
    UFUNCTION(BlueprintCallable)
    void PauseReinforcements(int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    void InitSpawns(FName ConfigId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRemainingReinforcements(int32 RequestID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIRRAIBaseCharacter*> GetReinforcementBots(int32 RequestID, bool bAliveOnly) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRSpawnReinforcementSettings GetDefaultReinforcementSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCoopMultiplier();
    
    UFUNCTION(BlueprintCallable)
    bool ContinueReinforcements(int32 RequestID);
    
    UFUNCTION(BlueprintCallable)
    int32 CalcCoopSpawnCount(int32 BaseCount, bool bUseCoopMultiplier);
    
};

