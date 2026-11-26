#pragma once
#include "CoreMinimal.h"
#include "BooleanCameraParameter.h"
#include "CameraRigInput2DSlot.h"
#include "Vector2dCameraParameter.h"
#include "InputAxisBinding2DCameraNode.generated.h"

class UInputAction;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UInputAxisBinding2DCameraNode : public UCameraRigInput2DSlot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInputAction*> AxisActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter RevertAxisX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBooleanCameraParameter RevertAxisY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2dCameraParameter Multiplier;
    
    UInputAxisBinding2DCameraNode();

};

