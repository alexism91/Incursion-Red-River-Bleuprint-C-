#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineMoveEffectErrorDelegate.h"
#include "OdinNativePipelineMoveEffectResponsePinDelegate.h"
#include "OdinNativePipelineMoveEffectSuccessDelegate.h"
#include "OdinNativePipelineMoveEffect.generated.h"

class UObject;
class UOdinNativePipelineMoveEffect;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineMoveEffect : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineMoveEffectResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 effectId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 newIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineMoveEffect();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineMoveEffect* PipelineMoveEffect(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, int32 effect_id, int32 NewNewIndex, const FOdinNativePipelineMoveEffectError& onError, const FOdinNativePipelineMoveEffectSuccess& OnSuccess);
    
};

