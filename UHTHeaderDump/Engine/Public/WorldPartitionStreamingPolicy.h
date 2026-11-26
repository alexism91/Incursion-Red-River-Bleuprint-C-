#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EWorldPartitionStreamingPerformance.h"
#include "WorldPartitionUpdateStreamingCurrentState.h"
#include "WorldPartitionUpdateStreamingTargetState.h"
#include "WorldPartitionStreamingPolicy.generated.h"

UCLASS(Abstract, Blueprintable, Within=WorldPartition)
class UWorldPartitionStreamingPolicy : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWorldPartitionUpdateStreamingCurrentState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EWorldPartitionStreamingPerformance CurrentStreamingPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCurrentBlockOnSlowStreaming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWorldPartitionUpdateStreamingTargetState TargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWorldPartitionUpdateStreamingCurrentState AsyncTaskCurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FWorldPartitionUpdateStreamingTargetState AsyncTaskTargetState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldMergeStreamingSourceInfo;
    
public:
    UWorldPartitionStreamingPolicy();

};

