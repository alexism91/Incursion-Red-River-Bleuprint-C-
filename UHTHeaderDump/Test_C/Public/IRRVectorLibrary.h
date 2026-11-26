#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRVectorLibrary.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRVectorLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRVectorLibrary();

    UFUNCTION(BlueprintCallable)
    static TArray<FVector> MakeEvenCirclePoints2D(const FVector& Origin, int32 NumPoints, float Radius);
    
    UFUNCTION(BlueprintCallable)
    static FVector GenerateRandomUnitVectorAbove(float DegreesMin, float DegreesMax);
    
    UFUNCTION(BlueprintCallable)
    static FVector GenerateRandomUnitVector(float DegreesMin, float DegreesMax);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateEqualDistanceAnglesFromDirection(TArray<FVector>& Results, const FVector& Direction, float MinDegrees, float MaxDegrees, const float AngleStepValue);
    
};

