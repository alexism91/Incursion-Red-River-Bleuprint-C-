#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SAL_FindLeaderboardFailureDelegate.h"
#include "SAL_FindLeaderboardSuccessDelegate.h"
#include "SAL_FindLeaderboard.generated.h"

class UObject;
class USAL_FindLeaderboard;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_FindLeaderboard : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_FindLeaderboardSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_FindLeaderboardFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USAL_FindLeaderboard();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_FindLeaderboard* FindLeaderboard(UObject* NewWorldContextObject, const FString& LeaderboardName);
    
};

