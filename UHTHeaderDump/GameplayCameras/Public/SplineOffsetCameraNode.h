#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "CameraRotatorCurve.h"
#include "CameraVectorCurve.h"
#include "ECameraNodeSpace.h"
#include "FloatCameraParameter.h"
#include "SplineOffsetCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class USplineOffsetCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter SplineInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraVectorCurve TranslationOffsetSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRotatorCurve RotationOffsetSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraNodeSpace OffsetSpace;
    
    USplineOffsetCameraNode();

};

