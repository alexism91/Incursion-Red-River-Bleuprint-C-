#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "KronosHostParams.h"
#include "CreateKronosSessionProxy.generated.h"

class UCreateKronosSessionProxy;
class UObject;

UCLASS(Blueprintable)
class KRONOS_API UCreateKronosSessionProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UCreateKronosSessionProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCreateKronosSessionProxy* CreateKronosPartySession(UObject* WorldContextObject, const FKronosHostParams& HostParams, bool bBindGlobalEvents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCreateKronosSessionProxy* CreateKronosGameSession(UObject* WorldContextObject, const FKronosHostParams& HostParams, bool bBindGlobalEvents);
    
};

