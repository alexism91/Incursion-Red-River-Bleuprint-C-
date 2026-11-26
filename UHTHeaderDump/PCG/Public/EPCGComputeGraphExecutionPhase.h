#pragma once
#include "CoreMinimal.h"
#include "EPCGComputeGraphExecutionPhase.generated.h"

UENUM(BlueprintType)
enum class EPCGComputeGraphExecutionPhase : uint8 {
    None,
    GetComputeGraph,
    InitializeDataBindingAndComputeGraph,
    PreExecuteReadbacks,
    PrimeDataDescriptionsAndValidateData,
    PrepareForExecute,
    ValidateComputeGraphCompilation,
    ScheduleComputeGraph,
    WaitForExecutionComplete,
    PostExecute,
    DebugAndInspection,
};

