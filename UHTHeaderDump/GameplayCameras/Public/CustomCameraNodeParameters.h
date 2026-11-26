#pragma once
#include "CoreMinimal.h"
#include "CustomCameraNodeBlendableParameter.h"
#include "CustomCameraNodeDataParameter.h"
#include "CustomCameraNodeParameters.generated.h"

USTRUCT(BlueprintType)
struct FCustomCameraNodeParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomCameraNodeBlendableParameter> BlendableParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCustomCameraNodeDataParameter> DataParameters;
    
    GAMEPLAYCAMERAS_API FCustomCameraNodeParameters();
};

