#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Transform3dCameraParameter.h"
#include "Transform3dCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FTransform3dCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform3dCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FTransform3dCameraRigParameterOverride();
};

