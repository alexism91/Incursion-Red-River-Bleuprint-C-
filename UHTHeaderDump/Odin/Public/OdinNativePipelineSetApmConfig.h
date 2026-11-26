#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinApmConfig.h"
#include "OdinNativePipelineSetApmConfigErrorDelegate.h"
#include "OdinNativePipelineSetApmConfigResponsePinDelegate.h"
#include "OdinNativePipelineSetApmConfigSuccessDelegate.h"
#include "OdinNativePipelineSetApmConfig.generated.h"

class UObject;
class UOdinNativePipelineSetApmConfig;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineSetApmConfig : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineSetApmConfigResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 effectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineSetApmConfig();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineSetApmConfig* PipelineSetApmConfig(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, const int32 effect_id, UPARAM(Ref) FOdinApmConfig& Config, const FOdinNativePipelineSetApmConfigError& onError, const FOdinNativePipelineSetApmConfigSuccess& OnSuccess);
    
};

