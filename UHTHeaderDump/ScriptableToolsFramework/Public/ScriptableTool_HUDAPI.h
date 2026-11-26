#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ScriptableTool_HUDAPI.generated.h"

class UScriptableTool_HUDAPI;

UCLASS(Blueprintable, Transient)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableTool_HUDAPI : public UObject {
    GENERATED_BODY()
public:
    UScriptableTool_HUDAPI();

    UFUNCTION(BlueprintCallable)
    UScriptableTool_HUDAPI* GetCanvasLocation(FVector Location, FVector2D& CanvasLocation);
    
    UFUNCTION(BlueprintCallable)
    UScriptableTool_HUDAPI* DrawTextAtLocation(FVector Location, const FString& String, FLinearColor Color, bool bCentered, float ShiftRowsY);
    
    UFUNCTION(BlueprintCallable)
    UScriptableTool_HUDAPI* DrawTextArrayAtLocation(FVector Location, TArray<FString> Strings, FLinearColor Color, bool bCentered, float ShiftRowsY);
    
};

