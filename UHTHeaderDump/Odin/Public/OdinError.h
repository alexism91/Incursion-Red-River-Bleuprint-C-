#pragma once
#include "CoreMinimal.h"
#include "OdinError.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinError {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Message;
    
    FOdinError();
};

