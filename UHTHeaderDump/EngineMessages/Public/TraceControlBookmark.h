#pragma once
#include "CoreMinimal.h"
#include "TraceControlBookmark.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlBookmark {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Label;
    
    ENGINEMESSAGES_API FTraceControlBookmark();
};

