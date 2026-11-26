#pragma once
#include "CoreMinimal.h"
#include "OdinMessageReceived.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinMessageReceived {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 sender_peer_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Message;
    
    FOdinMessageReceived();
};

