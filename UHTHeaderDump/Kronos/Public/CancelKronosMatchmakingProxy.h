#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "CancelKronosMatchmakingProxy.generated.h"

class UCancelKronosMatchmakingProxy;
class UObject;

UCLASS(Blueprintable)
class KRONOS_API UCancelKronosMatchmakingProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnComplete;
    
    UCancelKronosMatchmakingProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UCancelKronosMatchmakingProxy* CancelKronosMatchmaking(UObject* WorldContextObject);
    
};

