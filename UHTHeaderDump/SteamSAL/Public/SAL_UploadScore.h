#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ESALLeaderboardUploadMethod.h"
#include "SAL_LeaderboardHandle.h"
#include "SAL_UploadScoreFailureDelegate.h"
#include "SAL_UploadScoreSuccessDelegate.h"
#include "SAL_UploadScore.generated.h"

class UObject;
class USAL_UploadScore;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_UploadScore : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_UploadScoreSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_UploadScoreFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USAL_UploadScore();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_UploadScore* UploadScore(UObject* NewWorldContextObject, FSAL_LeaderboardHandle LeaderboardHandle, int32 Score, ESALLeaderboardUploadMethod UploadMethod, const TArray<int32>& Details);
    
};

