#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeDecoderGetPipelineErrorDelegate.h"
#include "OdinNativeDecoderGetPipelineResponsePinDelegate.h"
#include "OdinNativeDecoderGetPipelineSuccessDelegate.h"
#include "OdinNativeDecoderGetPipeline.generated.h"

class UObject;
class UOdinDecoder;
class UOdinNativeDecoderGetPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeDecoderGetPipeline : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeDecoderGetPipelineResponsePin OnResponse;
    
    UOdinNativeDecoderGetPipeline();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeDecoderGetPipeline* DecoderGetPipeline(UObject* WorldContextObject, UPARAM(Ref) UOdinDecoder*& decoder, const FOdinNativeDecoderGetPipelineError& onError, const FOdinNativeDecoderGetPipelineSuccess& OnSuccess);
    
};

