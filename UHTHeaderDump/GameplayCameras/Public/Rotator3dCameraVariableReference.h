#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Rotator3dCameraVariableReference.generated.h"

class URotator3dCameraVariable;

USTRUCT(BlueprintType)
struct FRotator3dCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URotator3dCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FRotator3dCameraVariableReference();
};

