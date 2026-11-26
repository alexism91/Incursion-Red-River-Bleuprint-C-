#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeTokenGeneratorGetKeyIdErrorDelegate.h"
#include "OdinNativeTokenGeneratorGetKeyIdResponsePinDelegate.h"
#include "OdinNativeTokenGeneratorGetKeyIdSuccessDelegate.h"
#include "OdinNativeTokenGeneratorGetKeyId.generated.h"

class UObject;
class UOdinNativeTokenGeneratorGetKeyId;
class UOdinTokenGenerator;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeTokenGeneratorGetKeyId : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeTokenGeneratorGetKeyIdResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinTokenGenerator* tokenGenerator;
    
    UOdinNativeTokenGeneratorGetKeyId();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeTokenGeneratorGetKeyId* TokenGeneratorGetKeyId(UObject* WorldContextObject, UPARAM(Ref) UOdinTokenGenerator*& NewTokenGenerator, const FOdinNativeTokenGeneratorGetKeyIdError& onError, const FOdinNativeTokenGeneratorGetKeyIdSuccess& OnSuccess);
    
};

