#pragma once
#include "CoreMinimal.h"
#include "SocialChatRoom.h"
#include "SocialPartyChatRoom.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USocialPartyChatRoom : public USocialChatRoom {
    GENERATED_BODY()
public:
    USocialPartyChatRoom();

};

