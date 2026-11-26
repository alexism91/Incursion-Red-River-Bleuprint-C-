#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ControlRig -ObjectName=RigUnit -FallbackName=RigUnit
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkGamepadInputDeviceFrameData -FallbackName=LiveLinkGamepadInputDeviceFrameData
#include "RigUnit_LiveLinkEvaluateInputDeviceValue.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_LiveLinkEvaluateInputDeviceValue : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SubjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkGamepadInputDeviceFrameData InputDeviceData;
    
    LIVELINKCONTROLRIG_API FRigUnit_LiveLinkEvaluateInputDeviceValue();
};

