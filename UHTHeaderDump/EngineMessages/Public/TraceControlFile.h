#pragma once
#include "CoreMinimal.h"
#include "TraceControlStartCommon.h"
#include "TraceControlFile.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlFile : public FTraceControlStartCommon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString File;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTruncateFile;
    
    ENGINEMESSAGES_API FTraceControlFile();
};

