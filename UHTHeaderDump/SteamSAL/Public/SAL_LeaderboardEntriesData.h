#pragma once
#include "CoreMinimal.h"
#include "ELeaderboardRequestType.h"
#include "SAL_LeaderboardEntryRow.h"
#include "SAL_LeaderboardEntriesData.generated.h"

USTRUCT(BlueprintType)
struct STEAMSAL_API FSAL_LeaderboardEntriesData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSAL_LeaderboardEntryRow> Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalEntryCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELeaderboardRequestType RequestType;
    
    FSAL_LeaderboardEntriesData();
};

