#pragma once
#include "CoreMinimal.h"
#include "BaseSmoothBrushOpProps.h"
#include "SmoothBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USmoothBrushOpProps : public UBaseSmoothBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreserveUVFlow;
    
    USmoothBrushOpProps();

};

