#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform3d -FallbackName=Transform3d
#include "CameraVariableAsset.h"
#include "Transform3dCameraVariable.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UTransform3dCameraVariable : public UCameraVariableAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform3d DefaultValue;
    
    UTransform3dCameraVariable();

};

