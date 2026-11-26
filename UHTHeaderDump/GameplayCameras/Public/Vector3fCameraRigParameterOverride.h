#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Vector3fCameraParameter.h"
#include "Vector3fCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FVector3fCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3fCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FVector3fCameraRigParameterOverride();
};

