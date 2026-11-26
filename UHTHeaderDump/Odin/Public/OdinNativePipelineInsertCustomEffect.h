#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineInsertCustomEffectErrorDelegate.h"
#include "OdinNativePipelineInsertCustomEffectResponsePinDelegate.h"
#include "OdinNativePipelineInsertCustomEffectSuccessDelegate.h"
#include "OdinNativePipelineInsertCustomEffect.generated.h"

class UObject;
class UOdinCustomEffect;
class UOdinNativePipelineInsertCustomEffect;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineInsertCustomEffect : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineInsertCustomEffectResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinCustomEffect* Effect;
    
    UOdinNativePipelineInsertCustomEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineInsertCustomEffect* PipelineInsertCustomEffect(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, UPARAM(Ref) UOdinCustomEffect*& NewEffect, int32 NewIndex, const FOdinNativePipelineInsertCustomEffectError& onError, const FOdinNativePipelineInsertCustomEffectSuccess& OnSuccess);
    
};

