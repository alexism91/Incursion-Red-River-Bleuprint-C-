#pragma once
#include "CoreMinimal.h"
#include "OptimusRawBufferDataInterface.h"
#include "OptimusPersistentBufferDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusPersistentBufferDataInterface : public UOptimusRawBufferDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ResourceName;
    
    UOptimusPersistentBufferDataInterface();

};

