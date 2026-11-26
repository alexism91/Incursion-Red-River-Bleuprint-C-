#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Integer32CameraParameter.generated.h"

class UInteger32CameraVariable;

USTRUCT(BlueprintType)
struct FInteger32CameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteger32CameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FInteger32CameraParameter();
};

