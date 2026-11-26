#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "EOdinEffectType.h"
#include "OdinNativePipelineGetEffectTypeErrorDelegate.h"
#include "OdinNativePipelineGetEffectTypeResponsePinDelegate.h"
#include "OdinNativePipelineGetEffectTypeSuccessDelegate.h"
#include "OdinNativePipelineGetEffectType.generated.h"

class UObject;
class UOdinNativePipelineGetEffectType;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineGetEffectType : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineGetEffectTypeResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 effectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOdinEffectType EffectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineGetEffectType();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineGetEffectType* PipelineGetEffectType(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, int32 effect_id, const FOdinNativePipelineGetEffectTypeError& onError, const FOdinNativePipelineGetEffectTypeSuccess& OnSuccess);
    
};

