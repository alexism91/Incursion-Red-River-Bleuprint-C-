#pragma once
#include "CoreMinimal.h"
#include "CameraObjectInterfaceParameterBase.h"
#include "CameraVariableID.h"
#include "ECameraVariableType.h"
#include "CameraObjectInterfaceBlendableParameter.generated.h"

class UCameraVariableAsset;
class UScriptStruct;

UCLASS(Blueprintable, MinimalAPI)
class UCameraObjectInterfaceBlendableParameter : public UCameraObjectInterfaceParameterBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraVariableType ParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* BlendableStructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreBlended;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID PrivateVariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraVariableAsset* PrivateVariable;
    
    UCameraObjectInterfaceBlendableParameter();

};

