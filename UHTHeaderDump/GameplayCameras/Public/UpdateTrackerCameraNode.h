#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "DoubleCameraParameter.h"
#include "Vector3dCameraParameter.h"
#include "UpdateTrackerCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UUpdateTrackerCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDoubleCameraParameter DoubleParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector3dCameraParameter VectorParameter;
    
    UUpdateTrackerCameraNode();

};

