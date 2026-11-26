#pragma once
#include "CoreMinimal.h"
#include "OdinSendMessage.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinSendMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int64> peer_ids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Message;
    
    FOdinSendMessage();
};

