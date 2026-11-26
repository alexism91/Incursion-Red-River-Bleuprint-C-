#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Vector2dCameraParameter.h"
#include "Vector2dCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FVector2dCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2dCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FVector2dCameraRigParameterOverride();
};

