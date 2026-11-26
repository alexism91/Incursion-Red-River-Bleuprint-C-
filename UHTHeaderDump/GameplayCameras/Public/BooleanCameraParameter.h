#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "BooleanCameraParameter.generated.h"

class UBooleanCameraVariable;

USTRUCT(BlueprintType)
struct FBooleanCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    bool Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBooleanCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FBooleanCameraParameter();
};

