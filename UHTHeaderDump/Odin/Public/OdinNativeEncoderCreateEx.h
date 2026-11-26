#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OdinNativeEncoderCreateExErrorDelegate.h"
#include "OdinNativeEncoderCreateExResponsePinDelegate.h"
#include "OdinNativeEncoderCreateExSuccessDelegate.h"
#include "OdinNativeEncoderCreateEx.generated.h"

class UObject;
class UOdinEncoder;
class UOdinNativeEncoderCreateEx;

UCLASS(Blueprintable)
class ODIN_API UOdinNativeEncoderCreateEx : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOdinNativeEncoderCreateExResponsePin OnResponse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PeerId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SampleRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Stereo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ApplicationVoip;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 BitrateKbps;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PacketLossPerc;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UpdatePositionInterval;
    
    UOdinNativeEncoderCreateEx();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinNativeEncoderCreateEx* EncoderCreateEx(UObject* WorldContextObject, UPARAM(Ref) UOdinEncoder*& encoder, int64 peer_id, int32 sample_rate, const bool NewStereo, const bool application_voip, int32 bitrate_kbps, int32 Packet_Loss_Perc, int64 Update_Position_Interval_MS, const FOdinNativeEncoderCreateExError& onError, const FOdinNativeEncoderCreateExSuccess& OnSuccess);
    
};

