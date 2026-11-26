#pragma once
#include "CoreMinimal.h"
#include "CameraContextDataID.h"
#include "CameraObjectInterfaceParameterBase.h"
#include "ECameraContextDataContainerType.h"
#include "ECameraContextDataType.h"
#include "CameraObjectInterfaceDataParameter.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UCameraObjectInterfaceDataParameter : public UCameraObjectInterfaceParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraContextDataType DataType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraContextDataContainerType DataContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DataTypeObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraContextDataID PrivateDataID;
    
    UCameraObjectInterfaceDataParameter();

};

