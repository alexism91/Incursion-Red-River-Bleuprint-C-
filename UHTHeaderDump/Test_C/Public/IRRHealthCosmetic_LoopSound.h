#pragma once
#include "CoreMinimal.h"
#include "IRRHealthCosmetic.h"
#include "IRRHealthCosmetic_LoopSound.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRHealthCosmetic_LoopSound : public UIRRHealthCosmetic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LoopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* StopEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeOutMs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* IntensityRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RtpcInterpolationMs;
    
    UIRRHealthCosmetic_LoopSound();

};

