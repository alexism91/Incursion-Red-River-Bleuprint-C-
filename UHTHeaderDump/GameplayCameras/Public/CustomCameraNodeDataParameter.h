#pragma once
#include "CoreMinimal.h"
#include "CameraContextDataID.h"
#include "ECameraContextDataContainerType.h"
#include "ECameraContextDataType.h"
#include "CustomCameraNodeDataParameter.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCustomCameraNodeDataParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraContextDataType ParameterType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraContextDataContainerType ParameterContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* ParameterTypeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraContextDataID OverrideDataID;
    
    GAMEPLAYCAMERAS_API FCustomCameraNodeDataParameter();
};

