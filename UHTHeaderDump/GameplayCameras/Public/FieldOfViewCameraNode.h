#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "FloatCameraParameter.h"
#include "FieldOfViewCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UFieldOfViewCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter FieldOfView;
    
    UFieldOfViewCameraNode();

};

