#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "DoubleCameraParameter.h"
#include "DoubleCameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FDoubleCameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoubleCameraParameter Value;
    
    GAMEPLAYCAMERAS_API FDoubleCameraRigParameterOverride();
};

