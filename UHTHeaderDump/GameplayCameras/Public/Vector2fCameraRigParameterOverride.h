#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Vector2fCameraParameter.h"
#include "Vector2fCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FVector2fCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2fCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FVector2fCameraRigParameterOverride();
};

