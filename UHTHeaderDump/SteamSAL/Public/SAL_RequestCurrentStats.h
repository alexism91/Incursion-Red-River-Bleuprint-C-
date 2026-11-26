#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "SAL_RequestCurrentStatsFailureDelegate.h"
#include "SAL_RequestCurrentStatsSuccessDelegate.h"
#include "SAL_RequestCurrentStats.generated.h"

class UObject;
class USAL_RequestCurrentStats;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_RequestCurrentStats : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_RequestCurrentStatsSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_RequestCurrentStatsFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USAL_RequestCurrentStats();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_RequestCurrentStats* RequestCurrentStats(UObject* NewWorldContextObject);
    
};

