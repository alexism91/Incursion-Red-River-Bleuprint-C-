#pragma once
#include "CoreMinimal.h"
#include "BooleanCameraParameter.h"
#include "ECameraAutoRotateDirection.h"
#include "FloatCameraParameter.h"
#include "Input2DCameraNode.h"
#include "Vector3dCameraVariableReference.h"
#include "AutoRotateInput2DCameraNode.generated.h"

class UCameraValueInterpolator;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAutoRotateInput2DCameraNode : public UInput2DCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraAutoRotateDirection Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3dCameraVariableReference DirectionVector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter DeactivationThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraValueInterpolator* Interpolator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter FreezeControlRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter EnableAutoRotate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter AutoRotateYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter AutoRotatePitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInput2DCameraNode* InputNode;
    
    UAutoRotateInput2DCameraNode();

};

