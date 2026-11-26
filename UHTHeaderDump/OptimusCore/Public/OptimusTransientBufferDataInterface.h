#pragma once
#include "CoreMinimal.h"
#include "OptimusRawBufferDataInterface.h"
#include "OptimusTransientBufferDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusTransientBufferDataInterface : public UOptimusRawBufferDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZeroInitForAtomicWrites;
    
    UOptimusTransientBufferDataInterface();

};

