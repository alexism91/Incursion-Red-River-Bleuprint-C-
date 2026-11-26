#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativePipelineGetVadConfigErrorDelegate.h"
#include "OdinNativePipelineGetVadConfigResponsePinDelegate.h"
#include "OdinNativePipelineGetVadConfigSuccessDelegate.h"
#include "OdinNativePipelineGetVadConfig.generated.h"

class UObject;
class UOdinNativePipelineGetVadConfig;
class UOdinPipeline;

UCLASS(Blueprintable)
class ODIN_API UOdinNativePipelineGetVadConfig : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativePipelineGetVadConfigResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 effectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOdinPipeline* pipeline;
    
    UOdinNativePipelineGetVadConfig();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativePipelineGetVadConfig* PipelineGetVadConfig(UObject* WorldContextObject, UPARAM(Ref) UOdinPipeline*& NewPipeline, const int32 effect_id, const FOdinNativePipelineGetVadConfigError& onError, const FOdinNativePipelineGetVadConfigSuccess& OnSuccess);
    
};

