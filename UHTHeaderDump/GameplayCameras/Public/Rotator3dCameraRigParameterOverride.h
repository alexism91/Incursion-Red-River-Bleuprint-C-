#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Rotator3dCameraParameter.h"
#include "Rotator3dCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FRotator3dCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator3dCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FRotator3dCameraRigParameterOverride();
};

