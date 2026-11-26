#pragma once
#include "CoreMinimal.h"
#include "OptimusRawBufferDataInterface.h"
#include "OptimusImplicitPersistentBufferDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusImplicitPersistentBufferDataInterface : public UOptimusRawBufferDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bZeroInitForAtomicWrites;
    
    UOptimusImplicitPersistentBufferDataInterface();

};

