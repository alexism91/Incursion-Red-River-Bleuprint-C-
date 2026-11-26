#pragma once
#include "CoreMinimal.h"
#include "OptimusPersistentBufferProvider.h"
#include "OptimusRawBufferDataProvider.h"
#include "OptimusPersistentBufferDataProvider.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UOptimusPersistentBufferDataProvider : public UOptimusRawBufferDataProvider, public IOptimusPersistentBufferProvider {
    GENERATED_BODY()
public:
    UOptimusPersistentBufferDataProvider();


    // Fix for true pure virtual functions not being implemented
};

