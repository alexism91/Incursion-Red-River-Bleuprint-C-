#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector3f -FallbackName=Vector3f
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "CameraRigParameterInteropLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UCameraRigParameterInteropLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UCameraRigParameterInteropLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector3f MakeLiteralVector3f(FVector3f Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D MakeLiteralVector2D(FVector2D Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector MakeLiteralVector(FVector Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator MakeLiteralRotator(FRotator Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FLinearColor MakeLiteralLinearColor(FLinearColor Value);
    
};

