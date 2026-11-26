#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CameraVariableID.h"
#include "Transform3dCameraParameter.generated.h"

class UTransform3dCameraVariable;

USTRUCT(BlueprintType)
struct FTransform3dCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransform3dCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FTransform3dCameraParameter();
};

