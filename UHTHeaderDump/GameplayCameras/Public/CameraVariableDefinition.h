#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "ECameraVariableType.h"
#include "CameraVariableDefinition.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct FCameraVariableDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraVariableType VariableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* BlendableStructType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPrivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoReset;
    
    GAMEPLAYCAMERAS_API FCameraVariableDefinition();
};

