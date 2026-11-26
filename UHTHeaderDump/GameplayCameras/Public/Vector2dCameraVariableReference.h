#pragma once
#include "CoreMinimal.h"
#include "CameraVariableID.h"
#include "Vector2dCameraVariableReference.generated.h"

class UVector2dCameraVariable;

USTRUCT(BlueprintType)
struct FVector2dCameraVariableReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVector2dCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FVector2dCameraVariableReference();
};

