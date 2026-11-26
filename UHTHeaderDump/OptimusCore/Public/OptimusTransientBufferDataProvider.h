#pragma once
#include "CoreMinimal.h"
#include "OptimusRawBufferDataProvider.h"
#include "OptimusTransientBufferDataProvider.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UOptimusTransientBufferDataProvider : public UOptimusRawBufferDataProvider {
    GENERATED_BODY()
public:
    UOptimusTransientBufferDataProvider();

};

