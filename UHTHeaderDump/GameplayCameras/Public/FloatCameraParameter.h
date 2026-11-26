#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "FloatCameraParameter.generated.h"

class UFloatCameraVariable;

USTRUCT(BlueprintType)
struct FFloatCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloatCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FFloatCameraParameter();
};

