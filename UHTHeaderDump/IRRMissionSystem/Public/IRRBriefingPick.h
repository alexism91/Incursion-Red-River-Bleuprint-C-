#pragma once
#include "CoreMinimal.h"
#include "IRRMissionBriefing.h"
#include "IRRBriefingPick.generated.h"

USTRUCT(BlueprintType)
struct IRRMISSIONSYSTEM_API FIRRBriefingPick {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMissionBriefing Briefing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFirstTime;
    
    FIRRBriefingPick();
};

