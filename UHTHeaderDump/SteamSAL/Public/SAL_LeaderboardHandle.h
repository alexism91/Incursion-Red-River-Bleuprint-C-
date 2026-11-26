#pragma once
#include "CoreMinimal.h"
#include "SAL_LeaderboardHandle.generated.h"

USTRUCT(BlueprintType)
struct FSAL_LeaderboardHandle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Value;
    
    STEAMSAL_API FSAL_LeaderboardHandle();
};

