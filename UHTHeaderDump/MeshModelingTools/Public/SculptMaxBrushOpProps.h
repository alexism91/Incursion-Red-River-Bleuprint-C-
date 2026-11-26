#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "SculptMaxBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USculptMaxBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFixedHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FixedHeight;
    
    USculptMaxBrushOpProps();

};

