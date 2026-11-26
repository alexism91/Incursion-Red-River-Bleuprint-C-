#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineInsertVadEffectErrorDelegate.h"
#include "OdinNativePipelineInsertVadEffectResponsePinDelegate.h"
#include "OdinNativePipelineInsertVadEffectSuccessDelegate.h"
#include "OdinNativePipelineInsertVadEffect.generated.h"

class UObject;
class UOdinNativePipelineInsertVadEffect;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineInsertVadEffect : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineInsertVadEffectResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineInsertVadEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineInsertVadEffect* PipelineInsertVadEffect(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, int32 NewIndex, const FOdinNativePipelineInsertVadEffectError& onError, const FOdinNativePipelineInsertVadEffectSuccess& OnSuccess);
    
};

