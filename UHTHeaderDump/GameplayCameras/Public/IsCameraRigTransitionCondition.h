#pragma once
#include "CoreMinimal.h"
#include "CameraRigTransitionCondition.h"
#include "IsCameraRigTransitionCondition.generated.h"

class UCameraRigAsset;

UCLASS(Blueprintable, MinimalAPI)
class UIsCameraRigTransitionCondition : public UCameraRigTransitionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraRigAsset* PreviousCameraRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraRigAsset* NextCameraRig;
    
    UIsCameraRigTransitionCondition();

};

