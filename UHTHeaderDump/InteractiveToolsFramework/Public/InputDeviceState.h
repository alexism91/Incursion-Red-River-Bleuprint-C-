#pragma once
#include "CoreMinimal.h"
#include "EInputDevices.h"
#include "KeyboardInputDeviceState.h"
#include "MouseInputDeviceState.h"
#include "InputDeviceState.generated.h"

USTRUCT(BlueprintType)
struct FInputDeviceState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EInputDevices InputDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bShiftKeyDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAltKeyDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCtrlKeyDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCmdKeyDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FKeyboardInputDeviceState Keyboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMouseInputDeviceState Mouse;
    
    INTERACTIVETOOLSFRAMEWORK_API FInputDeviceState();
};

