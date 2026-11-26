#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineRemoveEffectErrorDelegate.h"
#include "OdinNativePipelineRemoveEffectResponsePinDelegate.h"
#include "OdinNativePipelineRemoveEffectSuccessDelegate.h"
#include "OdinNativePipelineRemoveEffect.generated.h"

class UObject;
class UOdinNativePipelineRemoveEffect;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineRemoveEffect : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineRemoveEffectResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 effectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineRemoveEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineRemoveEffect* PipelineRemoveEffect(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, int32 NewEffectId, const FOdinNativePipelineRemoveEffectError& onError, const FOdinNativePipelineRemoveEffectSuccess& OnSuccess);
    
};

