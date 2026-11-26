#pragma once
#include "CoreMinimal.h"
#include "CameraNode.h"
#include "FloatCameraParameter.h"
#include "DampenRotationCameraNode.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDampenRotationCameraNode : public UCameraNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter YawDampingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter PitchDampingFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatCameraParameter RollDampingFactor;
    
    UDampenRotationCameraNode();

};

