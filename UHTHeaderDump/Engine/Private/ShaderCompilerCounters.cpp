#include "ShaderCompilerCounters.h"

FShaderCompilerCounters::FShaderCompilerCounters() {
    this->AccumulatedLocalWorkerIdleTime = 0.00f;
    this->TimesLocalWorkersWereIdle = 0.00f;
    this->JobsAssigned = 0;
    this->JobsCompleted = 0;
    this->AccumulatedPendingTime = 0.00f;
    this->MaxPendingTime = 0.00f;
    this->AccumulatedJobExecutionTime = 0.00f;
    this->MaxJobExecutionTime = 0.00f;
    this->AccumulatedJobLifeTime = 0.00f;
    this->MaxJobLifeTime = 0.00f;
    this->AccumulatedTaskSubmitJobs = 0.00f;
    this->AccumulatedTaskSubmitJobsStall = 0.00f;
    this->LocalJobBatchesSeen = 0;
    this->TotalJobsReportedInLocalJobBatches = 0;
    this->DistributedJobBatchesSeen = 0;
    this->TotalJobsReportedInDistributedJobBatches = 0;
    this->MinShaderCodeSize = 0;
    this->MaxShaderCodeSize = 0;
    this->AccumulatedShaderCodeSize = 0;
    this->NumAccumulatedShaderCodes = 0;
    this->ShaderMapDDCMisses = 0;
    this->ShaderMapDDCHits = 0;
    this->TotalCacheSearchAttempts = 0;
    this->TotalCacheHits = 0;
    this->TotalCacheDuplicates = 0;
    this->TotalCacheDDCQueries = 0;
    this->TotalCacheDDCHits = 0;
    this->UniqueCacheInputHashes = 0;
    this->UniqueCacheOutputs = 0;
    this->CacheMemUsed = 0;
    this->CacheMemBudget = 0;
    this->MaxRemoteAgents = 0;
    this->MaxActiveAgentCores = 0;
}

