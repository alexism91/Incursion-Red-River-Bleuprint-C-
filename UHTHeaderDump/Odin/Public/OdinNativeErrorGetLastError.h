#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeErrorGetLastErrorErrorDelegate.h"
#include "OdinNativeErrorGetLastErrorResponsePinDelegate.h"
#include "OdinNativeErrorGetLastErrorSuccessDelegate.h"
#include "OdinNativeErrorGetLastError.generated.h"

class UObject;
class UOdinNativeErrorGetLastError;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeErrorGetLastError : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeErrorGetLastErrorResponsePin OnResponse;
    
    UOdinNativeErrorGetLastError();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeErrorGetLastError* ErrorGetLastError(UObject* WorldContextObject, const FOdinNativeErrorGetLastErrorError& onError, const FOdinNativeErrorGetLastErrorSuccess& OnSuccess);
    
};

