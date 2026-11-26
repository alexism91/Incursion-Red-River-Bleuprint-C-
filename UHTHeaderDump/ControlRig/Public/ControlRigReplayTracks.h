#pragma once
#include "CoreMinimal.h"
#include "SampleTrackHost.h"
#include "ControlRigReplayTracks.generated.h"

USTRUCT(BlueprintType)
struct FControlRigReplayTracks : public FSampleTrackHost {
    GENERATED_BODY()
public:
    CONTROLRIG_API FControlRigReplayTracks();
};

