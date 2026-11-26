#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeEncoderPushErrorDelegate.h"
#include "OdinNativeEncoderPushResponsePinDelegate.h"
#include "OdinNativeEncoderPushSuccessDelegate.h"
#include "OdinNativeEncoderPush.generated.h"

class UObject;
class UOdinEncoder;
class UOdinNativeEncoderPush;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeEncoderPush : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeEncoderPushResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinEncoder* encoder;
    
    UOdinNativeEncoderPush();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeEncoderPush* EncoderPush(UObject* WorldContextObject, UPARAM(Ref) UOdinEncoder*& NewEncoder, const TArray<float>& Samples, const FOdinNativeEncoderPushError& onError, const FOdinNativeEncoderPushSuccess& OnSuccess);
    
};

