#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "KronosSessionSetting.h"
#include "KronosSessionSettings.h"
#include "UpdateKronosSessionProxy.generated.h"

class UObject;
class UUpdateKronosSessionProxy;

UCLASS(Blueprintable)
class KRONOS_API UUpdateKronosSessionProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UUpdateKronosSessionProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUpdateKronosSessionProxy* UpdateKronosPartySession(UObject* WorldContextObject, const FKronosSessionSettings& SessionSettings, const TArray<FKronosSessionSetting>& ExtraSessionSettings, const bool bRefreshOnlineData);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UUpdateKronosSessionProxy* UpdateKronosGameSession(UObject* WorldContextObject, const FKronosSessionSettings& SessionSettings, const TArray<FKronosSessionSetting>& ExtraSessionSettings, const bool bRefreshOnlineData);
    
};

