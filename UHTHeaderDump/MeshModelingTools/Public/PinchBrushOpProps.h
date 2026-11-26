#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "PinchBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UPinchBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerpDamping;
    
    UPinchBrushOpProps();

};

