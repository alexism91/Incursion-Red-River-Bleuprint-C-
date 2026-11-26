#pragma once
#include "CoreMinimal.h"
#include "SocialChatChannel.h"
#include "SocialReadOnlyChatChannel.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USocialReadOnlyChatChannel : public USocialChatChannel {
    GENERATED_BODY()
public:
    USocialReadOnlyChatChannel();

};

