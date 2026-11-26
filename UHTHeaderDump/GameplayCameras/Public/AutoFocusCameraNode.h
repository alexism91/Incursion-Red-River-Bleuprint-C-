#pragma once
#include "CoreMinimal.h"
#include "BooleanCameraVariableReference.h"
#include "CameraNode.h"
#include "FloatCameraParameter.h"
#include "AutoFocusCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAutoFocusCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraVariableReference EnableAutoFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter AutoFocusDampingFactor;
    
    UAutoFocusCameraNode();

};

