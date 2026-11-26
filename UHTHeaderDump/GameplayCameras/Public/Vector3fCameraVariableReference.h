#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Vector3fCameraVariableReference.generated.h"

class UVector3fCameraVariable;

USTRUCT(BlueprintType)
struct FVector3fCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVector3fCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FVector3fCameraVariableReference();
};

