#include "AnimationWarpingLibrary.h"

UAnimationWarpingLibrary::UAnimationWarpingLibrary() {
}

FTransform UAnimationWarpingLibrary::GetOffsetRootTransform(const FAnimNodeReference& Node) {
    return FTransform{};
}

bool UAnimationWarpingLibrary::GetCurveValueFromAnimation(const UAnimSequenceBase* Animation, FName CurveName, float Time, float& OutValue) {
    return false;
}


