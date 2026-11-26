#pragma once
#include "CoreMinimal.h"
#include "IRRAIPeekedCornerEntry.h"
#include "IRRAIPeekedCornerData.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIPeekedCornerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAIPeekedCornerEntry> Entries;
    
    FIRRAIPeekedCornerData();
};

