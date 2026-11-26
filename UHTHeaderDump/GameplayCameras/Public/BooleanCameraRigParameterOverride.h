#pragma once
#include "CoreMinimal.h"
#include "BooleanCameraParameter.h"
#include "CameraRigParameterOverrideBase.h"
#include "BooleanCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FBooleanCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FBooleanCameraRigParameterOverride();
};

