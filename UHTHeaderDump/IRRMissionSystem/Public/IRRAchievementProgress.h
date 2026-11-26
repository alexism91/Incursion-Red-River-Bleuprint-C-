#pragma once
#include "CoreMinimal.h"
#include "EIRRAchievementProgressMode.h"
#include "IRRAchievementProgress.generated.h"

USTRUCT(BlueprintType)
struct FIRRAchievementProgress {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AchievementName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAchievementProgressMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Amount;
    
    IRRMISSIONSYSTEM_API FIRRAchievementProgress();
};

