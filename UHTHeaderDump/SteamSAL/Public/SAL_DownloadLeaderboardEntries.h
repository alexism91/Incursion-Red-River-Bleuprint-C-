#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ELeaderboardRequestType.h"
#include "SAL_LeaderboardHandle.h"
#include "SAL_OnLeaderboardEntriesDataSuccessDelegate.h"
#include "SAL_OnLeaderboardEntriesFailureDelegate.h"
#include "SAL_DownloadLeaderboardEntries.generated.h"

class UObject;
class USAL_DownloadLeaderboardEntries;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_DownloadLeaderboardEntries : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnLeaderboardEntriesDataSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnLeaderboardEntriesFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USAL_DownloadLeaderboardEntries();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_DownloadLeaderboardEntries* DownloadLeaderboardEntries(UObject* NewWorldContextObject, FSAL_LeaderboardHandle LeaderboardHandle, ELeaderboardRequestType RequestType, int32 RangeStart, int32 RangeEnd);
    
};

