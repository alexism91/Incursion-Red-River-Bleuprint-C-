#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeTokenGeneratorCreateErrorDelegate.h"
#include "OdinNativeTokenGeneratorCreateResponsePinDelegate.h"
#include "OdinNativeTokenGeneratorCreateSuccessDelegate.h"
#include "OdinNativeTokenGeneratorCreate.generated.h"

class UObject;
class UOdinNativeTokenGeneratorCreate;
class UOdinTokenGenerator;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeTokenGeneratorCreate : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeTokenGeneratorCreateResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString accessKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinTokenGenerator* tokenGenerator;
    
    UOdinNativeTokenGeneratorCreate();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeTokenGeneratorCreate* TokenGeneratorCreate(UObject* WorldContextObject, const FString& access_key, const FOdinNativeTokenGeneratorCreateError& onError, const FOdinNativeTokenGeneratorCreateSuccess& OnSuccess);
    
};

