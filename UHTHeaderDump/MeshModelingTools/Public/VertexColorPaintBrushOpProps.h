#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "VertexColorBaseBrushOpProps.h"
#include "VertexColorPaintBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVertexColorPaintBrushOpProps : public UVertexColorBaseBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    UVertexColorPaintBrushOpProps();

};

