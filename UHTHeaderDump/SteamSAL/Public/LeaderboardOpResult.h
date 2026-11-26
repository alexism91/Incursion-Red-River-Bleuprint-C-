#pragma once
#include "CoreMinimal.h"
#include "LeaderboardOpResult.generated.h"

USTRUCT(BlueprintType)
struct FLeaderboardOpResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrorCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    STEAMSAL_API FLeaderboardOpResult();
};

