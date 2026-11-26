#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=StateStream -ObjectName=StateStreamHandle -FallbackName=StateStreamHandle
#include "SkyAtmosphereHandle.generated.h"

USTRUCT(BlueprintType)
struct FSkyAtmosphereHandle : public FStateStreamHandle {
    GENERATED_BODY()
public:
    ENGINE_API FSkyAtmosphereHandle();
};

