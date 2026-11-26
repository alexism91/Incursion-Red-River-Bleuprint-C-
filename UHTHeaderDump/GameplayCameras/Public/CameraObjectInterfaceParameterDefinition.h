#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "CameraContextDataID.h"
#include "CameraVariableID.h"
#include "ECameraContextDataContainerType.h"
#include "ECameraContextDataType.h"
#include "ECameraObjectInterfaceParameterType.h"
#include "ECameraVariableType.h"
#include "CameraObjectInterfaceParameterDefinition.generated.h"

class UObject;
class UScriptStruct;

USTRUCT(BlueprintType)
struct FCameraObjectInterfaceParameterDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ParameterGuid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraObjectInterfaceParameterType ParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraVariableType VariableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* BlendableStructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraContextDataID DataID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraContextDataType DataType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraContextDataContainerType DataContainerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DataTypeObject;
    
    GAMEPLAYCAMERAS_API FCameraObjectInterfaceParameterDefinition();
};

