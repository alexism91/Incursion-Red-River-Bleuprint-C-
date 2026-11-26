#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "InflateBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UInflateBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UInflateBrushOpProps();

};

