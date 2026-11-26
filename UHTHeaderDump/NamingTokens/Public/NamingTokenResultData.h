#pragma once
#include "CoreMinimal.h"
#include "NamingTokenValueData.h"
#include "NamingTokenResultData.generated.h"

USTRUCT(BlueprintType)
struct FNamingTokenResultData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OriginalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EvaluatedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNamingTokenValueData> TokenValues;
    
    NAMINGTOKENS_API FNamingTokenResultData();
};

