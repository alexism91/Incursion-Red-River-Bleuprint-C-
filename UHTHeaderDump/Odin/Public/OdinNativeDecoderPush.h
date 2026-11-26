#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeDecoderPushErrorDelegate.h"
#include "OdinNativeDecoderPushResponsePinDelegate.h"
#include "OdinNativeDecoderPushSuccessDelegate.h"
#include "OdinNativeDecoderPush.generated.h"

class UObject;
class UOdinDecoder;
class UOdinNativeDecoderPush;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeDecoderPush : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeDecoderPushResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinDecoder* decoder;
    
    UOdinNativeDecoderPush();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeDecoderPush* DecoderPush(UObject* WorldContextObject, UPARAM(Ref) UOdinDecoder*& NewDecoder, const TArray<uint8>& datagram, const FOdinNativeDecoderPushError& onError, const FOdinNativeDecoderPushSuccess& OnSuccess);
    
};

