#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Vector4fCameraVariableReference.generated.h"

class UVector4fCameraVariable;

USTRUCT(BlueprintType)
struct FVector4fCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVector4fCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FVector4fCameraVariableReference();
};

