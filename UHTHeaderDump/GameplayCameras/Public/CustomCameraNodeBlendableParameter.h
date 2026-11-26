#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "ECameraVariableType.h"
#include "CustomCameraNodeBlendableParameter.generated.h"

class UCameraVariableAsset;
class UScriptStruct;

USTRUCT(BlueprintType)
struct FCustomCameraNodeBlendableParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraVariableType ParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* BlendableStructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID OverrideVariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraVariableAsset* OverrideVariable;
    
    GAMEPLAYCAMERAS_API FCustomCameraNodeBlendableParameter();
};

