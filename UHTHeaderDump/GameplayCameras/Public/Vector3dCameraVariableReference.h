#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Vector3dCameraVariableReference.generated.h"

class UVector3dCameraVariable;

USTRUCT(BlueprintType)
struct FVector3dCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVector3dCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FVector3dCameraVariableReference();
};

