#pragma once
#include "CoreMinimal.h"
#include "EasyCsvStringValueArray.h"
#include "EasyCsvInfo.generated.h"

USTRUCT(BlueprintType)
struct FEasyCsvInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FEasyCsvStringValueArray> CSV_Map;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> CSV_Keys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> CSV_Headers;
    
    EASYCSV_API FEasyCsvInfo();
};

