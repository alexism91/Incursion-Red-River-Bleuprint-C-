#pragma once
#include "CoreMinimal.h"
#include "EasyCsvStringValueArray.generated.h"

USTRUCT(BlueprintType)
struct FEasyCsvStringValueArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StringValues;
    
    EASYCSV_API FEasyCsvStringValueArray();
};

