#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator3f -FallbackName=Rotator3f
#include "CameraVariableID.h"
#include "Rotator3fCameraParameter.generated.h"

class URotator3fCameraVariable;

USTRUCT(BlueprintType)
struct FRotator3fCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FRotator3f Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URotator3fCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FRotator3fCameraParameter();
};

