#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Vector4dCameraParameter.h"
#include "Vector4dCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FVector4dCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4dCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FVector4dCameraRigParameterOverride();
};

