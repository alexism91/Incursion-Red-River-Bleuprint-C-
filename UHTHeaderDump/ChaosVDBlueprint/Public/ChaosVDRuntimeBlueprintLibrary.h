#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "ChaosVDRuntimeBlueprintLibrary.generated.h"

class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UChaosVDRuntimeBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UChaosVDRuntimeBlueprintLibrary();

private:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RecordDebugDrawVector(const UObject* WorldContext, const FVector& InStartLocation, const FVector& InVector, FName Tag, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RecordDebugDrawSphere(const UObject* WorldContext, const FVector& InCenter, float Radius, FName Tag, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RecordDebugDrawLine(const UObject* WorldContext, const FVector& InStartLocation, const FVector& InEndLocation, FName Tag, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void RecordDebugDrawBox(const UObject* WorldContext, const FBox& InBox, FName Tag, FLinearColor Color);
    
};

