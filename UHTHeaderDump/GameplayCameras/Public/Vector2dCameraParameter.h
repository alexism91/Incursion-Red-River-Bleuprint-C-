#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "CameraVariableID.h"
#include "Vector2dCameraParameter.generated.h"

class UVector2dCameraVariable;

USTRUCT(BlueprintType)
struct FVector2dCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FVector2D Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UVector2dCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FVector2dCameraParameter();
};

