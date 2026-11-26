#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform3f -FallbackName=Transform3f
#include "CameraVariableID.h"
#include "Transform3fCameraParameter.generated.h"

class UTransform3fCameraVariable;

USTRUCT(BlueprintType)
struct FTransform3fCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FTransform3f Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransform3fCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FTransform3fCameraParameter();
};

