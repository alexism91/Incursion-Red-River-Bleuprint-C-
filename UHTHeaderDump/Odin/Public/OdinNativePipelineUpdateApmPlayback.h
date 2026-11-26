#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineUpdateApmPlaybackErrorDelegate.h"
#include "OdinNativePipelineUpdateApmPlaybackResponsePinDelegate.h"
#include "OdinNativePipelineUpdateApmPlaybackSuccessDelegate.h"
#include "OdinNativePipelineUpdateApmPlayback.generated.h"

class UObject;
class UOdinNativePipelineUpdateApmPlayback;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineUpdateApmPlayback : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineUpdateApmPlaybackResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 effectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineUpdateApmPlayback();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineUpdateApmPlayback* PipelineUpdateApmPlayback(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, const int32 effect_id, const TArray<float>& Samples, const int32 samples_count, const int32 Delay, const FOdinNativePipelineUpdateApmPlaybackError& onError, const FOdinNativePipelineUpdateApmPlaybackSuccess& OnSuccess);
    
};

