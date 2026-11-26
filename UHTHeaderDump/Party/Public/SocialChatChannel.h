#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialChatChannel.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Within=SocialChatManager)
class USocialChatChannel : public UObject {
    GENERATED_BODY()
public:
    USocialChatChannel();

};

