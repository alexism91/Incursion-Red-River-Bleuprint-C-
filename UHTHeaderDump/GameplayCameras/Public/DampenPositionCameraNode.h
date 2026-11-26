#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "ECameraNodeSpace.h"
#include "FloatCameraParameter.h"
#include "DampenPositionCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDampenPositionCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter ForwardDampingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter LateralDampingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter VerticalDampingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECameraNodeSpace DampenSpace;
    
    UDampenPositionCameraNode();

};

