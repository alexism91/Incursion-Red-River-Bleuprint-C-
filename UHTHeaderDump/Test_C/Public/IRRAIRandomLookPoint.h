#pragma once
#include "CoreMinimal.h"
#include "IRRAIRandomLookPoint.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIRandomLookPoint {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Angle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHit;
    
    FIRRAIRandomLookPoint();
};

