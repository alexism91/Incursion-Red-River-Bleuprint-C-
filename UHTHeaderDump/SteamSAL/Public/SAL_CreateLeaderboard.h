#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ESALLeaderboardDisplayType.h"
#include "ESALLeaderboardSortMethod.h"
#include "SAL_CreateLeaderboardFailureDelegate.h"
#include "SAL_CreateLeaderboardSuccessDelegate.h"
#include "SAL_CreateLeaderboard.generated.h"

class UObject;
class USAL_CreateLeaderboard;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_CreateLeaderboard : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_CreateLeaderboardSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_CreateLeaderboardFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USAL_CreateLeaderboard();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_CreateLeaderboard* CreateLeaderboard(UObject* NewWorldContextObject, const FString& LeaderboardName, ESALLeaderboardSortMethod SortMethod, ESALLeaderboardDisplayType DisplayType);
    
};

