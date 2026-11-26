#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=SequenceEvaluatorReference -FallbackName=SequenceEvaluatorReference
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=SequencePlayerReference -FallbackName=SequencePlayerReference
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimUpdateContext -FallbackName=AnimUpdateContext
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "AnimDistanceMatchingLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAnimDistanceMatchingLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimDistanceMatchingLibrary();

    UFUNCTION(BlueprintCallable)
    static FSequencePlayerReference SetPlayrateToMatchSpeed(const FSequencePlayerReference& SequencePlayer, float SpeedToMatch, FVector2D PlayRateClamp);
    
    UFUNCTION(BlueprintCallable)
    static FSequenceEvaluatorReference DistanceMatchToTarget(const FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, FName DistanceCurveName);
    
    UFUNCTION(BlueprintCallable)
    static FSequenceEvaluatorReference AdvanceTimeByDistanceMatching(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, FName DistanceCurveName, FVector2D PlayRateClamp);
    
};

