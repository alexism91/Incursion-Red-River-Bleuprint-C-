#pragma once
#include "CoreMinimal.h"
#include "DeviceButtonState.h"
#include "KeyboardInputDeviceState.generated.h"

USTRUCT(BlueprintType)
struct FKeyboardInputDeviceState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDeviceButtonState ActiveKey;
    
    INTERACTIVETOOLSFRAMEWORK_API FKeyboardInputDeviceState();
};

