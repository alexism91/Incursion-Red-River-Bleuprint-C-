#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "FloatCameraParameter.h"
#include "FloatCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FFloatCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FFloatCameraRigParameterOverride();
};

