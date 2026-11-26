#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Vector2fCameraVariableReference.generated.h"

class UVector2fCameraVariable;

USTRUCT(BlueprintType)
struct FVector2fCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVector2fCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FVector2fCameraVariableReference();
};

