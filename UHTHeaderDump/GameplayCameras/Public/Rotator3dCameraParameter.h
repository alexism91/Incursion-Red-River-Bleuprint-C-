#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "CameraVariableID.h"
#include "Rotator3dCameraParameter.generated.h"

class URotator3dCameraVariable;

USTRUCT(BlueprintType)
struct FRotator3dCameraParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FRotator Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVariableID VariableID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URotator3dCameraVariable* Variable;
    
    GAMEPLAYCAMERAS_API FRotator3dCameraParameter();
};

