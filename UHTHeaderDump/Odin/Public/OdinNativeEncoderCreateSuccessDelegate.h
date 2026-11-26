#pragma once
#include "CoreMinimal.h"
#include "OdinNativeEncoderCreateSuccessDelegate.generated.h"

class UOdinEncoder;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_FourParams(FOdinNativeEncoderCreateSuccess, uint32, peer_id, uint32, sample_rate, bool, Stereo, UOdinEncoder*, encoder);

