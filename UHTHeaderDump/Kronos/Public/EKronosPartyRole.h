#pragma once
#include "CoreMinimal.h"
#include "EKronosPartyRole.generated.h"

UENUM(BlueprintType)
enum class EKronosPartyRole : uint8 {
    NoParty,
    PartyClient,
    PartyHost,
};

