#pragma once
#include "CoreMinimal.h"
#include "CameraVariableSetterHandle.generated.h"

USTRUCT(BlueprintType)
struct FCameraVariableSetterHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Value;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SerialNumber;
    
public:
    GAMEPLAYCAMERAS_API FCameraVariableSetterHandle();
};

