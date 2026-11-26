#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "StandardSculptBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UStandardSculptBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UStandardSculptBrushOpProps();

};

