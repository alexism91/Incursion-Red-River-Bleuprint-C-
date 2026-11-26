#pragma once
#include "CoreMinimal.h"
#include "OdinPeerLeft.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinPeerLeft {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 peer_id;
    
    FOdinPeerLeft();
};

