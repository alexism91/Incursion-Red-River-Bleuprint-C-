#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "EraseSculptLayerBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEraseSculptLayerBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UEraseSculptLayerBrushOpProps();

};

