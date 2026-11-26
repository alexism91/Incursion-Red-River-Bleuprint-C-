#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimationWarpingLibrary.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, MinimalAPI)
class UAnimationWarpingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimationWarpingLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform GetOffsetRootTransform(const FAnimNodeReference& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCurveValueFromAnimation(const UAnimSequenceBase* Animation, FName CurveName, float Time, float& OutValue);
    
};

