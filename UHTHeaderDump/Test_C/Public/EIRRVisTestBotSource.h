#pragma once
#include "CoreMinimal.h"
#include "EIRRVisTestBotSource.generated.h"

UENUM(BlueprintType)
enum class EIRRVisTestBotSource : uint8 {
    NearestBot,
    ExplicitActor,
};

