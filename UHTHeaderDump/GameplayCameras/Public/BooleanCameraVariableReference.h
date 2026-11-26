#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "BooleanCameraVariableReference.generated.h"

class UBooleanCameraVariable;

USTRUCT(BlueprintType)
struct FBooleanCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBooleanCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FBooleanCameraVariableReference();
};

