#pragma once
#include "CoreMinimal.h"
#include "BasePlaneBrushOpProps.h"
#include "EPlaneBrushSideMode.h"
#include "ViewAlignedPlaneBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UViewAlignedPlaneBrushOpProps : public UBasePlaneBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlaneBrushSideMode WhichSide;
    
    UViewAlignedPlaneBrushOpProps();

};

