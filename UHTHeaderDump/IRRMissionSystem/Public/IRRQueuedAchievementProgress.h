#pragma once
#include "CoreMinimal.h"
#include "IRRAchievementProgress.h"
#include "IRRQueuedAchievementProgress.generated.h"

class UIRRSteamAchievement;

USTRUCT(BlueprintType)
struct FIRRQueuedAchievementProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRSteamAchievement* Achievement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAchievementProgress Progress;
    
    IRRMISSIONSYSTEM_API FIRRQueuedAchievementProgress();
};

