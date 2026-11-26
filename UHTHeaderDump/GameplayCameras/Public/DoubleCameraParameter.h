#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "DoubleCameraParameter.generated.h"

class UDoubleCameraVariable;

USTRUCT(BlueprintType)
struct FDoubleCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    double Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDoubleCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FDoubleCameraParameter();
};

