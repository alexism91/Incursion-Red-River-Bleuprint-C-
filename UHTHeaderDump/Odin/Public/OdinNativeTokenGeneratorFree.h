#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeTokenGeneratorFreeErrorDelegate.h"
#include "OdinNativeTokenGeneratorFreeResponsePinDelegate.h"
#include "OdinNativeTokenGeneratorFreeSuccessDelegate.h"
#include "OdinNativeTokenGeneratorFree.generated.h"

class UObject;
class UOdinNativeTokenGeneratorFree;
class UOdinTokenGenerator;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeTokenGeneratorFree : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeTokenGeneratorFreeResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinTokenGenerator* tokenGenerator;
    
    UOdinNativeTokenGeneratorFree();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeTokenGeneratorFree* TokenGeneratorFree(UObject* WorldContextObject, UPARAM(Ref) UOdinTokenGenerator*& NewTokenGenerator, const FOdinNativeTokenGeneratorFreeError& onError, const FOdinNativeTokenGeneratorFreeSuccess& OnSuccess);
    
};

