#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SAL_LeaderboardHandle.h"
#include "SAL_OnDownloadEntriesForUsersFailureDelegate.h"
#include "SAL_OnDownloadEntriesForUsersSuccessDelegate.h"
#include "SAL_DownloadLeaderboardForUsers.generated.h"

class UObject;
class USAL_DownloadLeaderboardForUsers;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_DownloadLeaderboardForUsers : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnDownloadEntriesForUsersSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnDownloadEntriesForUsersFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_LeaderboardHandle InHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> InSteamId64Strings;
    
public:
    USAL_DownloadLeaderboardForUsers();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_DownloadLeaderboardForUsers* DownloadEntriesForUsers(UObject* NewWorldContextObject, FSAL_LeaderboardHandle LeaderboardHandle, const TArray<FString>& SteamIDs);
    
};

