#pragma once
#include "CoreMinimal.h"
#include "EIRRSpectatorLookSource.generated.h"

UENUM(BlueprintType)
enum class EIRRSpectatorLookSource : uint8 {
    Controller,
    CosmeticAim,
    ActorRotation,
};

