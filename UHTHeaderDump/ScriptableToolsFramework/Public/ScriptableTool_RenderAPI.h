#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ScriptableTool_RenderAPI.generated.h"

class UScriptableTool_RenderAPI;

UCLASS(Blueprintable, Transient)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableTool_RenderAPI : public UObject {
    GENERATED_BODY()
public:
    UScriptableTool_RenderAPI();

    UFUNCTION(BlueprintCallable)
    UScriptableTool_RenderAPI* DrawRectWidthHeightXY(FTransform Transform, double Width, double Height, FLinearColor Color, float LineThickness, float DepthBias, bool bDepthTested, bool bCentered);
    
    UFUNCTION(BlueprintCallable)
    UScriptableTool_RenderAPI* DrawLine(FVector Start, FVector End, FLinearColor Color, float Thickness, float DepthBias, bool bDepthTested);
    
};

