#pragma once
#include "CoreMinimal.h"
#include "OdinJoined.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinJoined {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 own_peer_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString room_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString customer;
    
    FOdinJoined();
};

