#pragma once
#include "CoreMinimal.h"
#include "OptimusPersistentBufferProvider.h"
#include "OptimusRawBufferDataProvider.h"
#include "OptimusImplicitPersistentBufferDataProvider.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UOptimusImplicitPersistentBufferDataProvider : public UOptimusRawBufferDataProvider, public IOptimusPersistentBufferProvider {
    GENERATED_BODY()
public:
    UOptimusImplicitPersistentBufferDataProvider();


    // Fix for true pure virtual functions not being implemented
};

