#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "CameraRotatorCurve.h"
#include "CameraVectorCurve.h"
#include "ECameraNodeSpace.h"
#include "FloatCameraParameter.h"
#include "SplineOrbitCameraNode.generated.h"

class UInput2DCameraNode;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USplineOrbitCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVectorCurve LocationOffsetSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVectorCurve TargetOffsetSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRotatorCurve RotationOffsetSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter LocationOffsetMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraNodeSpace TargetOffsetSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInput2DCameraNode* InputSlot;
    
    USplineOrbitCameraNode();

};

