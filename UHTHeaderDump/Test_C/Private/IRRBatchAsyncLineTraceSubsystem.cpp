#include "IRRBatchAsyncLineTraceSubsystem.h"

UIRRBatchAsyncLineTraceSubsystem::UIRRBatchAsyncLineTraceSubsystem() {
}

int32 UIRRBatchAsyncLineTraceSubsystem::AsyncBatchLineTraceByChannel(const FVector& Origin, const TArray<FBatchTraceLocation>& Targets, TEnumAsByte<ECollisionChannel> TraceChannel, const FBatchLineTraceCompleteDelegate& OnComplete, const TArray<AActor*>& ActorsToIgnore, FName TraceTag, bool bTraceComplex) {
    return 0;
}


