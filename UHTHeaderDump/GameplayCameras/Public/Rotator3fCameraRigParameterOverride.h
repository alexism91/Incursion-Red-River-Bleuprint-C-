#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Rotator3fCameraParameter.h"
#include "Rotator3fCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FRotator3fCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator3fCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FRotator3fCameraRigParameterOverride();
};

