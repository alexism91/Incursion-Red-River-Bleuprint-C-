#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Transform3dCameraVariableReference.generated.h"

class UTransform3dCameraVariable;

USTRUCT(BlueprintType)
struct FTransform3dCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransform3dCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FTransform3dCameraVariableReference();
};

