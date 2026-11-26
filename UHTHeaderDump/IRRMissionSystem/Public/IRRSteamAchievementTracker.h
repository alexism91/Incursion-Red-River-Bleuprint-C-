#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRQueuedAchievementProgress.h"
#include "IRRSteamAchievementTracker.generated.h"

class USAL_RequestCurrentStats;
class USAL_StoreStatsAndAchievements;

UCLASS(Blueprintable, Transient)
class IRRMISSIONSYSTEM_API UIRRSteamAchievementTracker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRQueuedAchievementProgress> QueuedProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USAL_RequestCurrentStats* StatsRequest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USAL_StoreStatsAndAchievements* StoreRequest;
    
public:
    UIRRSteamAchievementTracker();

private:
    UFUNCTION(BlueprintCallable)
    void HandleStoreSucceeded();
    
    UFUNCTION(BlueprintCallable)
    void HandleStoreFailed(const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void HandleStatsRequestFailed(const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable)
    void HandleStatsReceived();
    
};

