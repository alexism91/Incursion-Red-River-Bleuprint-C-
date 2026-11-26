#pragma once
#include "CoreMinimal.h"
#include "IRRAINextCornerData.h"
#include "IRRAIPathDirectionData.h"
#include "IRRAICurrentPathData.generated.h"

USTRUCT(BlueprintType)
struct FIRRAICurrentPathData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIPathDirectionData CurrentCornerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAINextCornerData NextCornerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingPathLength;
    
    TEST_C_API FIRRAICurrentPathData();
};

