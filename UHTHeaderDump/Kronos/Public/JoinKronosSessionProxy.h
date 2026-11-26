#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "KronosSearchResult.h"
#include "JoinKronosSessionProxy.generated.h"

class UJoinKronosSessionProxy;
class UObject;

UCLASS(Blueprintable)
class KRONOS_API UJoinKronosSessionProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UJoinKronosSessionProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UJoinKronosSessionProxy* JoinKronosPartySession(UObject* WorldContextObject, const FKronosSearchResult& SessionToJoin, bool bBindGlobalEvents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UJoinKronosSessionProxy* JoinKronosGameSession(UObject* WorldContextObject, const FKronosSearchResult& SessionToJoin, bool bSkipReservation, bool bBindGlobalEvents);
    
};

