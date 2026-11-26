#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRSettingHandler -FallbackName=IRRSettingHandler
#include "IRRSettingHandler_AkRtpc.generated.h"

class UAkRtpc;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TEST_C_API UIRRSettingHandler_AkRtpc : public UIRRSettingHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RTPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Scale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> OptionValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InterpolationTimeMs;
    
    UIRRSettingHandler_AkRtpc();

};

