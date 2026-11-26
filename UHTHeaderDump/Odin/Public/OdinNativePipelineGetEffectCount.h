#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineGetEffectCountErrorDelegate.h"
#include "OdinNativePipelineGetEffectCountResponsePinDelegate.h"
#include "OdinNativePipelineGetEffectCountSuccessDelegate.h"
#include "OdinNativePipelineGetEffectCount.generated.h"

class UObject;
class UOdinNativePipelineGetEffectCount;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineGetEffectCount : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineGetEffectCountResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineGetEffectCount();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineGetEffectCount* PipelineGetEffectCount(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, const FOdinNativePipelineGetEffectCountError& onError, const FOdinNativePipelineGetEffectCountSuccess& OnSuccess);
    
};

