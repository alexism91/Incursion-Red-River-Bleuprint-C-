#include "FilterTraceTargetsByTrace.h"

UFilterTraceTargetsByTrace::UFilterTraceTargetsByTrace() {
    this->WorldContextObject = NULL;
}

UFilterTraceTargetsByTrace* UFilterTraceTargetsByTrace::FilterTraceTargetsByTrace_Async(const UObject* NewWorldContextObject, const FVector& FilterTraceStartLocation, const TSet<FVector>& TraceTargets, TArray<AActor*> NewActorsToIgnore, TEnumAsByte<ECollisionChannel> TraceChannel) {
    return NULL;
}


