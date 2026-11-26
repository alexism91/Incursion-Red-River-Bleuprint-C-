#pragma once
#include "CoreMinimal.h"
#include "EAudioMaterialEnvelopeType.generated.h"

UENUM(BlueprintType)
enum class EAudioMaterialEnvelopeType : uint8 {
    AD,
    ADSR,
};

