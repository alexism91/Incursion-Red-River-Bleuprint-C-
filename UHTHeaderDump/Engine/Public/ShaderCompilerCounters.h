#pragma once
#include "CoreMinimal.h"
#include "ShaderCompilerCounters.generated.h"

USTRUCT(BlueprintType)
struct FShaderCompilerCounters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AccumulatedLocalWorkerIdleTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimesLocalWorkersWereIdle;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 JobsAssigned;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 JobsCompleted;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AccumulatedPendingTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxPendingTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AccumulatedJobExecutionTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxJobExecutionTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AccumulatedJobLifeTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxJobLifeTime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AccumulatedTaskSubmitJobs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double AccumulatedTaskSubmitJobsStall;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 LocalJobBatchesSeen;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalJobsReportedInLocalJobBatches;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 DistributedJobBatchesSeen;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 TotalJobsReportedInDistributedJobBatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinShaderCodeSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShaderCodeSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 AccumulatedShaderCodeSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 NumAccumulatedShaderCodes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ShaderMapDDCMisses;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ShaderMapDDCHits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 TotalCacheSearchAttempts;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 TotalCacheHits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TotalCacheDuplicates;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TotalCacheDDCQueries;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TotalCacheDDCHits;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 UniqueCacheInputHashes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 UniqueCacheOutputs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 CacheMemUsed;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 CacheMemBudget;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxRemoteAgents;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxActiveAgentCores;
    
    ENGINE_API FShaderCompilerCounters();
};

