#pragma once
#include "CoreMinimal.h"
#include "EKronosSpecificSessionQueryType.generated.h"

UENUM(BlueprintType)
enum class EKronosSpecificSessionQueryType : uint8 {
    Unspecified,
    FriendId,
    SessionId,
    SessionOwnerId,
};

