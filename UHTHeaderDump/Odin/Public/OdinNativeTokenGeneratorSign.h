#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeTokenGeneratorSignErrorDelegate.h"
#include "OdinNativeTokenGeneratorSignResponsePinDelegate.h"
#include "OdinNativeTokenGeneratorSignSuccessDelegate.h"
#include "OdinNativeTokenGeneratorSign.generated.h"

class UObject;
class UOdinNativeTokenGeneratorSign;
class UOdinTokenGenerator;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeTokenGeneratorSign : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeTokenGeneratorSignResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Body;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinTokenGenerator* tokenGenerator;
    
    UOdinNativeTokenGeneratorSign();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeTokenGeneratorSign* TokenGeneratorSign(UObject* WorldContextObject, UPARAM(Ref) UOdinTokenGenerator*& NewTokenGenerator, const FString& NewBody, const FOdinNativeTokenGeneratorSignError& onError, const FOdinNativeTokenGeneratorSignSuccess& OnSuccess);
    
};

