#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator3d -FallbackName=Rotator3d
#include "CameraVariableAsset.h"
#include "Rotator3dCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URotator3dCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator3d DefaultValue;
    
    URotator3dCameraVariable();

};

