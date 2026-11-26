#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeEncoderGetPipelineErrorDelegate.h"
#include "OdinNativeEncoderGetPipelineResponsePinDelegate.h"
#include "OdinNativeEncoderGetPipelineSuccessDelegate.h"
#include "OdinNativeEncoderGetPipeline.generated.h"

class UObject;
class UOdinEncoder;
class UOdinNativeEncoderGetPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeEncoderGetPipeline : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeEncoderGetPipelineResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinEncoder* encoder;
    
    UOdinNativeEncoderGetPipeline();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeEncoderGetPipeline* EncoderGetPipeline(UObject* WorldContextObject, UPARAM(Ref) UOdinEncoder*& NewEncoder, const FOdinNativeEncoderGetPipelineError& onError, const FOdinNativeEncoderGetPipelineSuccess& OnSuccess);
    
};

