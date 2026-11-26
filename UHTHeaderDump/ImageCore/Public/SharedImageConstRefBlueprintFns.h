#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2f -FallbackName=Vector2f
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4f -FallbackName=Vector4f
#include "SharedImageConstRefBlueprint.h"
#include "SharedImageConstRefBlueprintFns.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class USharedImageConstRefBlueprintFns : public UObject {
    GENERATED_BODY()
public:
    USharedImageConstRefBlueprintFns();

    UFUNCTION(BlueprintCallable)
    static bool IsValid(const FSharedImageConstRefBlueprint& Image);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetWidth(const FSharedImageConstRefBlueprint& Image);
    
    UFUNCTION(BlueprintCallable)
    static FVector2f GetSize(const FSharedImageConstRefBlueprint& Image);
    
    UFUNCTION(BlueprintCallable)
    static FVector4f GetPixelValue(const FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool& bValid);
    
    UFUNCTION(BlueprintCallable)
    static FLinearColor GetPixelLinearColor(const FSharedImageConstRefBlueprint& Image, int32 X, int32 Y, bool& bValid, FLinearColor FailureColor);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetHeight(const FSharedImageConstRefBlueprint& Image);
    
};

