#pragma once
#include "CoreMinimal.h"
#include "CameraRigParameterOverrideBase.h"
#include "Integer32CameraParameter.h"
#include "Integer32CameraRigParameterOverride.generated.h"

USTRUCT(BlueprintType)
struct FInteger32CameraRigParameterOverride : public FCameraRigParameterOverrideBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteger32CameraParameter Value;
    
    GAMEPLAYCAMERAS_API FInteger32CameraRigParameterOverride();
};

