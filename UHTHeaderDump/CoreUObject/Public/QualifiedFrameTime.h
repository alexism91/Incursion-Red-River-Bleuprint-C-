#pragma once
#include "CoreMinimal.h"
#include "FrameRate.h"
#include "FrameTime.h"
#include "QualifiedFrameTime.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FQualifiedFrameTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameRate Rate;
    
    COREUOBJECT_API FQualifiedFrameTime();
};

