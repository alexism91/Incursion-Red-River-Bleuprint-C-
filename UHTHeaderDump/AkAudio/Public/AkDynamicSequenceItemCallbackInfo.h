#pragma once
#include "CoreMinimal.h"
#include "AkCallbackInfo.h"
#include "AkDynamicSequenceItemCallbackInfo.generated.h"

class UObject;

UCLASS(Blueprintable)
class AKAUDIO_API UAkDynamicSequenceItemCallbackInfo : public UAkCallbackInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayingID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AudioNodeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* CustomInfo;
    
    UAkDynamicSequenceItemCallbackInfo();

};

