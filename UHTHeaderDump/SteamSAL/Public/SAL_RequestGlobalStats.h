#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SAL_RequestGlobalStatsFailureDelegate.h"
#include "SAL_RequestGlobalStatsSuccessDelegate.h"
#include "SAL_RequestGlobalStats.generated.h"

class USAL_RequestGlobalStats;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_RequestGlobalStats : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_RequestGlobalStatsSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_RequestGlobalStatsFailure OnFailure;
    
    USAL_RequestGlobalStats();

    UFUNCTION(BlueprintCallable)
    static USAL_RequestGlobalStats* RequestGlobalStats(int32 Days);
    
};

