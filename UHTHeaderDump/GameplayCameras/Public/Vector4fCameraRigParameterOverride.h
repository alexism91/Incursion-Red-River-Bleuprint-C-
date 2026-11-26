#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Vector4fCameraParameter.h"
#include "Vector4fCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FVector4fCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4fCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FVector4fCameraRigParameterOverride();
};

