#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Transform3fCameraVariableReference.generated.h"

class UTransform3fCameraVariable;

USTRUCT(BlueprintType)
struct FTransform3fCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransform3fCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FTransform3fCameraVariableReference();
};

