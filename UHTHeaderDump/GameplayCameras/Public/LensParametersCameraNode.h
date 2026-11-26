#pragma once
#include "CoreMinimal.h"
#include "BooleanCameraParameter.h"
#include "CameraNode.h"
#include "FloatCameraParameter.h"
#include "LensParametersCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULensParametersCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter FocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter FocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter Aperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter EnablePhysicalCamera;
    
    ULensParametersCameraNode();

};

