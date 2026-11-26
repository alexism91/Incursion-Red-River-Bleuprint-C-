#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "DoubleCameraParameter.h"
#include "ClippingPlanesCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UClippingPlanesCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoubleCameraParameter NearPlane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoubleCameraParameter FarPlane;
    
    UClippingPlanesCameraNode();

};

