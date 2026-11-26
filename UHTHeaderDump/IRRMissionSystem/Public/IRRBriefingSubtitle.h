#pragma once
#include "CoreMinimal.h"
#include "IRRBriefingSubtitle.generated.h"

USTRUCT(BlueprintType)
struct IRRMISSIONSYSTEM_API FIRRBriefingSubtitle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SubtitleText;
    
    FIRRBriefingSubtitle();
};

