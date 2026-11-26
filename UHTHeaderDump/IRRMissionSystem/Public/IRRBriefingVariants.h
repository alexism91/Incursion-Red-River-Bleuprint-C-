#pragma once
#include "CoreMinimal.h"
#include "EIRRBriefingPickMode.h"
#include "IRRMissionBriefing.h"
#include "IRRBriefingVariants.generated.h"

USTRUCT(BlueprintType)
struct IRRMISSIONSYSTEM_API FIRRBriefingVariants {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRMissionBriefing> FirstTimeVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayEachFirstTimeVariant;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRMissionBriefing> Variants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRBriefingPickMode PickMode;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MemoryKey;
    
    FIRRBriefingVariants();
};

