#include "MoviePipelineQueue.h"
#include "Templates/SubclassOf.h"

UMoviePipelineQueue::UMoviePipelineQueue() {
}

void UMoviePipelineQueue::SetQueueOrigin(UMoviePipelineQueue* InConfig) {
}

void UMoviePipelineQueue::SetJobIndex(UMoviePipelineExecutorJob* InJob, int32 Index) {
}

UMoviePipelineQueue* UMoviePipelineQueue::GetQueueOrigin() const {
    return NULL;
}

TArray<UMoviePipelineExecutorJob*> UMoviePipelineQueue::GetJobs() const {
    return TArray<UMoviePipelineExecutorJob*>();
}

UMoviePipelineExecutorJob* UMoviePipelineQueue::DuplicateJob(UMoviePipelineExecutorJob* InJob) {
    return NULL;
}

void UMoviePipelineQueue::DeleteJob(UMoviePipelineExecutorJob* InJob) {
}

void UMoviePipelineQueue::DeleteAllJobs() {
}

UMoviePipelineQueue* UMoviePipelineQueue::CopyFrom(UMoviePipelineQueue* InQueue) {
    return NULL;
}

UMoviePipelineExecutorJob* UMoviePipelineQueue::AllocateNewJob(TSubclassOf<UMoviePipelineExecutorJob> InJobType) {
    return NULL;
}


