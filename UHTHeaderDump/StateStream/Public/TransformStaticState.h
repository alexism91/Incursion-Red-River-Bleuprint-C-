#pragma once
#include "CoreMinimal.h"
#include "TransformStaticState.generated.h"

USTRUCT(BlueprintType)
struct FTransformStaticState {
    GENERATED_BODY()
public:
    STATESTREAM_API FTransformStaticState();
};

