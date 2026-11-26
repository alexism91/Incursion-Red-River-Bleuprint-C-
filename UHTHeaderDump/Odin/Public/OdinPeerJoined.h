#pragma once
#include "CoreMinimal.h"
#include "OdinPeerJoined.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinPeerJoined {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 peer_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString user_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> user_data;
    
    FOdinPeerJoined();
};

