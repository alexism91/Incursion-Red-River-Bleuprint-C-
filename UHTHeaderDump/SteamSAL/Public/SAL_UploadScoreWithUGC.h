#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SAL_LeaderboardHandle.h"
#include "SAL_OnUploadScoreWithUGCFailureDelegate.h"
#include "SAL_OnUploadScoreWithUGCSuccessDelegate.h"
#include "SAL_UploadScoreWithUGC.generated.h"

class UObject;
class USAL_UploadScoreWithUGC;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_UploadScoreWithUGC : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnUploadScoreWithUGCSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnUploadScoreWithUGCFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USAL_UploadScoreWithUGC();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_UploadScoreWithUGC* UploadScoreWithUGC(UObject* NewWorldContextObject, FSAL_LeaderboardHandle LeaderboardHandle, int32 Score, TArray<int32> Details, const FString& UGCFileName, TArray<uint8> UGCData);
    
};

