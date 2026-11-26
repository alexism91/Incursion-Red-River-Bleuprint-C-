#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Transform3fCameraParameter.h"
#include "Transform3fCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FTransform3fCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform3fCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FTransform3fCameraRigParameterOverride();
};

