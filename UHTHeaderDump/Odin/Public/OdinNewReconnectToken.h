#pragma once
#include "CoreMinimal.h"
#include "OdinNewReconnectToken.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinNewReconnectToken {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString token;
    
    FOdinNewReconnectToken();
};

