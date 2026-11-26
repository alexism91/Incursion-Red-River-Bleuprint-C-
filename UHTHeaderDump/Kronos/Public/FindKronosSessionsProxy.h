#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "KronosSearchParams.h"
#include "OnFindKronosSessionsProxyCompleteDelegate.h"
#include "FindKronosSessionsProxy.generated.h"

class UFindKronosSessionsProxy;
class UObject;

UCLASS(Blueprintable)
class KRONOS_API UFindKronosSessionsProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindKronosSessionsProxyComplete OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFindKronosSessionsProxyComplete OnFailure;
    
    UFindKronosSessionsProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFindKronosSessionsProxy* FindKronosPartySessions(UObject* WorldContextObject, const FKronosSearchParams& SearchParams, bool bBindGlobalEvents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFindKronosSessionsProxy* FindKronosGameSessions(UObject* WorldContextObject, const FKronosSearchParams& SearchParams, bool bBindGlobalEvents);
    
};

