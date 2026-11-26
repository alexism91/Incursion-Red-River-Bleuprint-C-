#pragma once
#include "CoreMinimal.h"
#include "EMeshVertexPaintToolUtilityOperations.generated.h"

UENUM()
enum class EMeshVertexPaintToolUtilityOperations : int32 {
    BlendAllSeams,
    FillChannels,
    InvertChannels,
    CopyChannelToChannel,
    SwapChannels,
    CopyFromWeightMap,
    CopyToOtherLODs,
    CopyToSingleLOD,
};

