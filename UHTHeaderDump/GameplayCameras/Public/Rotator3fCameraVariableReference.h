#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Rotator3fCameraVariableReference.generated.h"

class URotator3fCameraVariable;

USTRUCT(BlueprintType)
struct FRotator3fCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URotator3fCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FRotator3fCameraVariableReference();
};

