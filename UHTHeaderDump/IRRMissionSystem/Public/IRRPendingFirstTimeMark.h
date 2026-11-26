#pragma once
#include "CoreMinimal.h"
#include "IRRBriefingPick.h"
#include "IRRBriefingVariants.h"
#include "IRRPendingFirstTimeMark.generated.h"

USTRUCT(BlueprintType)
struct FIRRPendingFirstTimeMark {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBriefingVariants Briefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBriefingPick Pick;
    
    IRRMISSIONSYSTEM_API FIRRPendingFirstTimeMark();
};

