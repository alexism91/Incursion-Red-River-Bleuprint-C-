#pragma once
#include "CoreMinimal.h"
#include "StateStreamHandle.h"
#include "TransformHandle.generated.h"

USTRUCT(BlueprintType)
struct FTransformHandle : public FStateStreamHandle {
    GENERATED_BODY()
public:
    STATESTREAM_API FTransformHandle();
};

