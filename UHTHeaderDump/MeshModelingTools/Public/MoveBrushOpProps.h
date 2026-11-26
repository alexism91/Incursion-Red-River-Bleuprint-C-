#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=ModelingToolsAxisFilter -FallbackName=ModelingToolsAxisFilter
#include "MeshSculptBrushOpProps.h"
#include "MoveBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMoveBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Depth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModelingToolsAxisFilter AxisFilters;
    
    UMoveBrushOpProps();

};

