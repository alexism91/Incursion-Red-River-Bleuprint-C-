#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "FloatCameraVariableReference.generated.h"

class UFloatCameraVariable;

USTRUCT(BlueprintType)
struct FFloatCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFloatCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FFloatCameraVariableReference();
};

