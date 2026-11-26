#pragma once
#include "CoreMinimal.h"
#include "TraceControlSnapshotFile.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlSnapshotFile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString File;
    
    ENGINEMESSAGES_API FTraceControlSnapshotFile();
};

