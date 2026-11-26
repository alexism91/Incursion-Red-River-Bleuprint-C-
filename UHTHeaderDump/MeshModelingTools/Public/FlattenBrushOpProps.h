#pragma once
#include "CoreMinimal.h"
#include "EPlaneBrushSideMode.h"
#include "MeshSculptBrushOpProps.h"
#include "FlattenBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UFlattenBrushOpProps : public UMeshSculptBrushOpProps {
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
    
    UFlattenBrushOpProps();

};

