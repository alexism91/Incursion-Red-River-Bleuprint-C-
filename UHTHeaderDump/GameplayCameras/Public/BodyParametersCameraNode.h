#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "FloatCameraParameter.h"
#include "BodyParametersCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UBodyParametersCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter ShutterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter ISO;
    
    UBodyParametersCameraNode();

};

