#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3d -FallbackName=Vector3d
#include "CameraVariableAsset.h"
#include "Vector3dCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UVector3dCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3d DefaultValue;
    
    UVector3dCameraVariable();

};

