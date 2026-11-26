#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeDecoderPopErrorDelegate.h"
#include "OdinNativeDecoderPopResponsePinDelegate.h"
#include "OdinNativeDecoderPopSuccessDelegate.h"
#include "OdinNativeDecoderPop.generated.h"

class UObject;
class UOdinDecoder;
class UOdinNativeDecoderPop;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeDecoderPop : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeDecoderPopResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinDecoder* decoder;
    
    UOdinNativeDecoderPop();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeDecoderPop* DecoderPop(UObject* WorldContextObject, UPARAM(Ref) UOdinDecoder*& NewDecoder, const TArray<float>& Buffer, const FOdinNativeDecoderPopError& onError, const FOdinNativeDecoderPopSuccess& OnSuccess);
    
};

