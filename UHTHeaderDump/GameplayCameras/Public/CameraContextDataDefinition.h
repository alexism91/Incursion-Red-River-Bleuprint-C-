#pragma once
#include "CoreMinimal.h"
#include "CameraContextDataID.h"
#include "ECameraContextDataContainerType.h"
#include "ECameraContextDataType.h"
#include "CameraContextDataDefinition.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCameraContextDataDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraContextDataID DataID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraContextDataType DataType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraContextDataContainerType DataContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DataTypeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoReset;
    
    GAMEPLAYCAMERAS_API FCameraContextDataDefinition();
};

