#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "ViewAlignedSculptBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UViewAlignedSculptBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UViewAlignedSculptBrushOpProps();

};

