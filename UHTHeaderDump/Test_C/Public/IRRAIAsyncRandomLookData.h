#pragma once
#include "CoreMinimal.h"
#include "IRRAIRandomLookPoint.h"
#include "IRRAIAsyncRandomLookData.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIAsyncRandomLookData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAIRandomLookPoint> Points;
    
    FIRRAIAsyncRandomLookData();
};

