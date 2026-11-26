#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusDuplicateVerticesDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusDuplicateVerticesDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UOptimusDuplicateVerticesDataInterface();

};

