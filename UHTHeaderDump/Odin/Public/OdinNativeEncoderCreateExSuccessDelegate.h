#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderCreateExSuccessDelegate.generated.h"

class UOdinEncoder;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_SevenParams(FOdinNativeEncoderCreateExSuccess, int64, peer_id, uint32, sample_rate, bool, Stereo, bool, application_voip, uint32, bitrate_kbps, int64, update_position_interval, UOdinEncoder*, encoder);

