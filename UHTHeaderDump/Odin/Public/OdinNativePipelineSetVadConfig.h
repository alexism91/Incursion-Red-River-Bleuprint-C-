#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineSetVadConfigErrorDelegate.h"
#include "OdinNativePipelineSetVadConfigResponsePinDelegate.h"
#include "OdinNativePipelineSetVadConfigSuccessDelegate.h"
#include "OdinVadConfig.h"
#include "OdinNativePipelineSetVadConfig.generated.h"

class UObject;
class UOdinNativePipelineSetVadConfig;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineSetVadConfig : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineSetVadConfigResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 effectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineSetVadConfig();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineSetVadConfig* PipelineSetVadConfig(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, const int32 effect_id, UPARAM(Ref) FOdinVadConfig& Config, const FOdinNativePipelineSetVadConfigError& onError, const FOdinNativePipelineSetVadConfigSuccess& OnSuccess);
    
};

