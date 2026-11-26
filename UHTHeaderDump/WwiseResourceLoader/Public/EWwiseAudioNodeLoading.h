#pragma once
#include "CoreMinimal.h"
#include "EWwiseAudioNodeLoading.generated.h"

UENUM(BlueprintType)
enum class EWwiseAudioNodeLoading : uint8 {
    AlwaysLoad,
    LoadOnReference,
    LoadOnResolve,
    LoadOnEnqueue,
};

