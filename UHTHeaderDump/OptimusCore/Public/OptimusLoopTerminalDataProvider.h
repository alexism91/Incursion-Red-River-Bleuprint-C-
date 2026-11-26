#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "OptimusLoopTerminalDataProvider.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UOptimusLoopTerminalDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
    UOptimusLoopTerminalDataProvider();

};

