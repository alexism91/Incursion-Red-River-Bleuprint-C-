#pragma once
#include "CoreMinimal.h"
#include "EVertexColorPaintBrushOpBlendMode.h"
#include "MeshSculptBrushOpProps.h"
#include "VertexColorBaseBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVertexColorBaseBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EVertexColorPaintBrushOpBlendMode BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyFalloff;
    
    UVertexColorBaseBrushOpProps();

};

