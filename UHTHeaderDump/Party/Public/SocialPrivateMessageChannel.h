#pragma once
#include "CoreMinimal.h"
#include "SocialChatChannel.h"
#include "SocialPrivateMessageChannel.generated.h"

class USocialUser;

UCLASS(Blueprintable, MinimalAPI)
class USocialPrivateMessageChannel : public USocialChatChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialUser* TargetUser;
    
public:
    USocialPrivateMessageChannel();

};

