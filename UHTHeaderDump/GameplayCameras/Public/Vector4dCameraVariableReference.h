#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Vector4dCameraVariableReference.generated.h"

class UVector4dCameraVariable;

USTRUCT(BlueprintType)
struct FVector4dCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVector4dCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FVector4dCameraVariableReference();
};

