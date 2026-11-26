#pragma once
#include "CoreMinimal.h"
#include "CameraValueInterpolator.h"
#include "AccelerationDecelerationValueInterpolator.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UAccelerationDecelerationValueInterpolator : public UCameraValueInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Deceleration;
    
    UAccelerationDecelerationValueInterpolator();

};

