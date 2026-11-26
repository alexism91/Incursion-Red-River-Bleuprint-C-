#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusOutputBufferWriter.h"
#include "OptimusSkinnedMeshWriteDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusSkinnedMeshWriteDataInterface : public UOptimusComputeDataInterface, public IOptimusOutputBufferWriter {
    GENERATED_BODY()
public:
    UOptimusSkinnedMeshWriteDataInterface();


    // Fix for true pure virtual functions not being implemented
};

