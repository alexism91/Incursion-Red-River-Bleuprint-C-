#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineInsertApmEffectErrorDelegate.h"
#include "OdinNativePipelineInsertApmEffectResponsePinDelegate.h"
#include "OdinNativePipelineInsertApmEffectSuccessDelegate.h"
#include "OdinNativePipelineInsertApmEffect.generated.h"

class UObject;
class UOdinNativePipelineInsertApmEffect;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineInsertApmEffect : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineInsertApmEffectResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Index;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PlaybackSamplerate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PlaybackStereo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineInsertApmEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineInsertApmEffect* PipelineInsertApmEffect(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, int32 NewIndex, int32 playback_sample_rate, const bool playback_stereo, const FOdinNativePipelineInsertApmEffectError& onError, const FOdinNativePipelineInsertApmEffectSuccess& OnSuccess);
    
};

