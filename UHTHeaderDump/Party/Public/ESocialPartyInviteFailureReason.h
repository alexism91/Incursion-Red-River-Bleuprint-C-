#pragma once
#include "CoreMinimal.h"
#include "ESocialPartyInviteFailureReason.generated.h"

UENUM(BlueprintType)
enum class ESocialPartyInviteFailureReason : uint8 {
    Success,
    NotOnline,
    NotAcceptingMembers,
    NotFriends,
    AlreadyInParty,
    OssValidationFailed,
    PlatformInviteFailed,
    PartyInviteFailed,
    InviteRateLimitExceeded,
};

