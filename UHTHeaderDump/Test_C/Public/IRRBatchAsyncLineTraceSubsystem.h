#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "BatchLineTraceCompleteDelegateDelegate.h"
#include "BatchTraceLocation.h"
#include "IRRBatchAsyncLineTraceSubsystem.generated.h"

class AActor;

UCLASS(Blueprintable)
class TEST_C_API UIRRBatchAsyncLineTraceSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRBatchAsyncLineTraceSubsystem();

    UFUNCTION(BlueprintCallable)
    int32 AsyncBatchLineTraceByChannel(const FVector& Origin, const TArray<FBatchTraceLocation>& Targets, TEnumAsByte<ECollisionChannel> TraceChannel, const FBatchLineTraceCompleteDelegate& OnComplete, const TArray<AActor*>& ActorsToIgnore, FName TraceTag, bool bTraceComplex);
    
};

