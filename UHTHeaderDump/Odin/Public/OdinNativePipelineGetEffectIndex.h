#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineGetEffectIndexErrorDelegate.h"
#include "OdinNativePipelineGetEffectIndexResponsePinDelegate.h"
#include "OdinNativePipelineGetEffectIndexSuccessDelegate.h"
#include "OdinNativePipelineGetEffectIndex.generated.h"

class UObject;
class UOdinNativePipelineGetEffectIndex;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineGetEffectIndex : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineGetEffectIndexResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 effectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineGetEffectIndex();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineGetEffectIndex* PipelineGetEffectIndex(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, int32 NewEffectId, const FOdinNativePipelineGetEffectIndexError& onError, const FOdinNativePipelineGetEffectIndexSuccess& OnSuccess);
    
};

