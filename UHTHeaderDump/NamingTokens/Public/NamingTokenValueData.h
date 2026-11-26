#pragma once
#include "CoreMinimal.h"
#include "NamingTokenValueData.generated.h"

USTRUCT(BlueprintType)
struct FNamingTokenValueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TokenKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProvidedNamespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TokenValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWasEvaluated;
    
    NAMINGTOKENS_API FNamingTokenValueData();
};

