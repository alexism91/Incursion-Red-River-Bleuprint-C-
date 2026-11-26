#pragma once
#include "CoreMinimal.h"
#include "FrameNumber.h"
#include "FrameTime.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FFrameTime {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber FrameNumber;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SubFrame;
    
public:
    COREUOBJECT_API FFrameTime();
};

