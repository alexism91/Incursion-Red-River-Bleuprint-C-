#pragma once
#include "CoreMinimal.h"
#include "OdinChangeSelf.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinChangeSelf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> user_data;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Parameters;
    
    FOdinChangeSelf();
};

