#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Vector3dCameraParameter.h"
#include "Vector3dCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FVector3dCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3dCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FVector3dCameraRigParameterOverride();
};

