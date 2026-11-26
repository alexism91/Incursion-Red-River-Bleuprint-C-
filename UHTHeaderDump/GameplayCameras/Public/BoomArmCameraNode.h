#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "DoubleCameraParameter.h"
#include "Vector3dCameraParameter.h"
#include "BoomArmCameraNode.generated.h"

class UCameraValueInterpolator;
class UInput2DCameraNode;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBoomArmCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3dCameraParameter BoomOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraValueInterpolator* BoomLengthInterpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoubleCameraParameter MaxForwardInterpolationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoubleCameraParameter MaxBackwardInterpolationFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInput2DCameraNode* InputSlot;
    
    UBoomArmCameraNode();

};

