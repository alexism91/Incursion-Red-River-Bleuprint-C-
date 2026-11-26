#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "Templates/SubclassOf.h"
#include "MoviePipelineQueue.generated.h"

class UMoviePipelineExecutorJob;
class UMoviePipelineQueue;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMoviePipelineQueue : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMoviePipelineExecutorJob*> Jobs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMoviePipelineQueue> QueueOrigin;
    
public:
    UMoviePipelineQueue();

    UFUNCTION(BlueprintCallable)
    void SetQueueOrigin(UMoviePipelineQueue* InConfig);
    
    UFUNCTION(BlueprintCallable)
    void SetJobIndex(UMoviePipelineExecutorJob* InJob, int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMoviePipelineQueue* GetQueueOrigin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMoviePipelineExecutorJob*> GetJobs() const;
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorJob* DuplicateJob(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable)
    void DeleteJob(UMoviePipelineExecutorJob* InJob);
    
    UFUNCTION(BlueprintCallable)
    void DeleteAllJobs();
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineQueue* CopyFrom(UMoviePipelineQueue* InQueue);
    
    UFUNCTION(BlueprintCallable)
    UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<UMoviePipelineExecutorJob> InJobType);
    
};

