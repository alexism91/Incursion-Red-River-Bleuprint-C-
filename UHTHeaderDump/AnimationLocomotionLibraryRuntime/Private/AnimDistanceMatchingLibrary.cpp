#include "AnimDistanceMatchingLibrary.h"

UAnimDistanceMatchingLibrary::UAnimDistanceMatchingLibrary() {
}

FSequencePlayerReference UAnimDistanceMatchingLibrary::SetPlayrateToMatchSpeed(const FSequencePlayerReference& SequencePlayer, float SpeedToMatch, FVector2D PlayRateClamp) {
    return FSequencePlayerReference{};
}

FSequenceEvaluatorReference UAnimDistanceMatchingLibrary::DistanceMatchToTarget(const FSequenceEvaluatorReference& SequenceEvaluator, float DistanceToTarget, FName DistanceCurveName) {
    return FSequenceEvaluatorReference{};
}

FSequenceEvaluatorReference UAnimDistanceMatchingLibrary::AdvanceTimeByDistanceMatching(const FAnimUpdateContext& UpdateContext, const FSequenceEvaluatorReference& SequenceEvaluator, float DistanceTraveled, FName DistanceCurveName, FVector2D PlayRateClamp) {
    return FSequenceEvaluatorReference{};
}


