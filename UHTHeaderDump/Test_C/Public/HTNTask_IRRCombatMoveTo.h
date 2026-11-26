#pragma once
#include "CoreMinimal.h"
#include "AITargetSprintConfig.h"
#include "HTNTask_IRRCoverMoveTo.h"
#include "HTNTask_IRRCombatMoveTo.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_IRRCombatMoveTo : public UHTNTask_IRRCoverMoveTo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAITargetSprintConfig SprintConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightThresholdReloading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeightThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebug;
    
    UHTNTask_IRRCombatMoveTo();

};

