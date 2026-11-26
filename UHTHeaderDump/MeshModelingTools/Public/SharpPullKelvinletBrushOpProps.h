#pragma once
#include "CoreMinimal.h"
#include "BaseKelvinletBrushOpProps.h"
#include "SharpPullKelvinletBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USharpPullKelvinletBrushOpProps : public UBaseKelvinletBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Depth;
    
    USharpPullKelvinletBrushOpProps();

};

