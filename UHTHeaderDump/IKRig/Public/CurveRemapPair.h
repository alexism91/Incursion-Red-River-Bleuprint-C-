#pragma once
#include "CoreMinimal.h"
#include "CurveRemapPair.generated.h"

USTRUCT(BlueprintType)
struct FCurveRemapPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetCurve;
    
    IKRIG_API FCurveRemapPair();
};

