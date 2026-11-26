#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeShutdownErrorDelegate.h"
#include "OdinNativeShutdownResponsePinDelegate.h"
#include "OdinNativeShutdownSuccessDelegate.h"
#include "OdinNativeShutdown.generated.h"

class UObject;
class UOdinNativeShutdown;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeShutdown : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeShutdownResponsePin OnResponse;
    
    UOdinNativeShutdown();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeShutdown* Shutdown(UObject* WorldContextObject, const FOdinNativeShutdownError& onError, const FOdinNativeShutdownSuccess& OnSuccess);
    
};

