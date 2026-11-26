#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "CameraSingleCurve.h"
#include "FloatCameraParameter.h"
#include "SplineFieldOfViewCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USplineFieldOfViewCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter SplineInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraSingleCurve FieldOfViewSpline;
    
    USplineFieldOfViewCameraNode();

};

