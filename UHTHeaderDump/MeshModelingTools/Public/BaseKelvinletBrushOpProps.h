#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "BaseKelvinletBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UBaseKelvinletBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Stiffness;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Incompressiblity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BrushSteps;
    
    UBaseKelvinletBrushOpProps();

};

