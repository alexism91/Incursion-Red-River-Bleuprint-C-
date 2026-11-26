#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeErrorResetLastErrorErrorDelegate.h"
#include "OdinNativeErrorResetLastErrorResponsePinDelegate.h"
#include "OdinNativeErrorResetLastErrorSuccessDelegate.h"
#include "OdinNativeErrorResetLastError.generated.h"

class UObject;
class UOdinNativeErrorResetLastError;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeErrorResetLastError : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeErrorResetLastErrorResponsePin OnResponse;
    
    UOdinNativeErrorResetLastError();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeErrorResetLastError* ErrorResetLastError(UObject* WorldContextObject, const FOdinNativeErrorResetLastErrorError& onError, const FOdinNativeErrorResetLastErrorSuccess& OnSuccess);
    
};

