#pragma once
#include "CoreMinimal.h"
#include "ChaosSolverDestructionSettings.generated.h"

USTRUCT(BlueprintType)
struct FChaosSolverDestructionSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerAdvanceBreaksAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerAdvanceBreaksRescheduleLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClusteringParticleReleaseThrottlingMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ClusteringParticleReleaseThrottlingMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptimizeForRuntimeMemory;
    
    CHAOS_API FChaosSolverDestructionSettings();
};

