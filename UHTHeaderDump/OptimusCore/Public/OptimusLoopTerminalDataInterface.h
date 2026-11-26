#pragma once
#include "CoreMinimal.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusLoopTerminalDataInterface.generated.h"

UCLASS(Blueprintable)
class UOptimusLoopTerminalDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Index;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Count;
    
public:
    UOptimusLoopTerminalDataInterface();

};

