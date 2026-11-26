#pragma once
#include "CoreMinimal.h"
#include "OdinRoomStatusChanged.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinRoomStatusChanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Status;
    
    FOdinRoomStatusChanged();
};

