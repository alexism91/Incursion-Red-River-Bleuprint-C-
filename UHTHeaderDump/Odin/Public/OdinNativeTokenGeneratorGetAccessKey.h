#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeTokenGeneratorGetAccessKeyErrorDelegate.h"
#include "OdinNativeTokenGeneratorGetAccessKeyResponsePinDelegate.h"
#include "OdinNativeTokenGeneratorGetAccessKeySuccessDelegate.h"
#include "OdinNativeTokenGeneratorGetAccessKey.generated.h"

class UObject;
class UOdinNativeTokenGeneratorGetAccessKey;
class UOdinTokenGenerator;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeTokenGeneratorGetAccessKey : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeTokenGeneratorGetAccessKeyResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinTokenGenerator* tokenGenerator;
    
    UOdinNativeTokenGeneratorGetAccessKey();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeTokenGeneratorGetAccessKey* TokenGeneratorGetAccessKey(UObject* WorldContextObject, UPARAM(Ref) UOdinTokenGenerator*& NewTokenGenerator, const FOdinNativeTokenGeneratorGetAccessKeyError& onError, const FOdinNativeTokenGeneratorGetAccessKeySuccess& OnSuccess);
    
};

