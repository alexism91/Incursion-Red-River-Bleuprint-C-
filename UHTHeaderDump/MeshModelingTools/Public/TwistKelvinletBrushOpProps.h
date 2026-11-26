#pragma once
#include "CoreMinimal.h"
#include "BaseKelvinletBrushOpProps.h"
#include "TwistKelvinletBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UTwistKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UTwistKelvinletBrushOpProps();

};

