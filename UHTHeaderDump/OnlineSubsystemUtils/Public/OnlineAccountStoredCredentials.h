#pragma once
#include "CoreMinimal.h"
#include "OnlineAccountStoredCredentials.generated.h"

USTRUCT(BlueprintType)
struct FOnlineAccountStoredCredentials {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString token;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> TokenBytes;
    
    ONLINESUBSYSTEMUTILS_API FOnlineAccountStoredCredentials();
};

