#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineGetEffectIdErrorDelegate.h"
#include "OdinNativePipelineGetEffectIdResponsePinDelegate.h"
#include "OdinNativePipelineGetEffectIdSuccessDelegate.h"
#include "OdinNativePipelineGetEffectId.generated.h"

class UObject;
class UOdinNativePipelineGetEffectId;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineGetEffectId : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineGetEffectIdResponsePin OnResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineGetEffectId();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineGetEffectId* PipelineGetEffectId(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, int32 Index, const FOdinNativePipelineGetEffectIdError& onError, const FOdinNativePipelineGetEffectIdSuccess& OnSuccess);
    
};

