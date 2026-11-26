#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "KronosMatchmakingParams.h"
#include "OnKronosMatchmakingProxyCompleteDelegate.h"
#include "KronosMatchmakingProxy.generated.h"

class UKronosMatchmakingProxy;
class UObject;

UCLASS(Blueprintable)
class KRONOS_API UKronosMatchmakingProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosMatchmakingProxyComplete OnStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosMatchmakingProxyComplete OnComplete;
    
    UKronosMatchmakingProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKronosMatchmakingProxy* StartKronosPartySessionMatchmaking(UObject* WorldContextObject, const FKronosMatchmakingParams& MatchmakingParams, const int32 MatchmakingFlags, bool bBindGlobalEvents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKronosMatchmakingProxy* StartKronosGameSessionMatchmaking(UObject* WorldContextObject, const FKronosMatchmakingParams& MatchmakingParams, const int32 MatchmakingFlags, bool bBindGlobalEvents);
    
};

