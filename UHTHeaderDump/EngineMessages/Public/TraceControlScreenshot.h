#pragma once
#include "CoreMinimal.h"
#include "TraceControlScreenshot.generated.h"

USTRUCT(BlueprintType)
struct FTraceControlScreenshot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUI;
    
    ENGINEMESSAGES_API FTraceControlScreenshot();
};

