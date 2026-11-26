#include "CachedAnimDataLibrary.h"

UCachedAnimDataLibrary::UCachedAnimDataLibrary() {
}

bool UCachedAnimDataLibrary::StateMachine_IsStateRelevant(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData) {
    return false;
}

bool UCachedAnimDataLibrary::StateMachine_IsRelevant(UAnimInstance* InAnimInstance, const FCachedAnimStateArray& CachedAnimStateArray) {
    return false;
}

bool UCachedAnimDataLibrary::StateMachine_IsFullWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateArray& CachedAnimStateArray) {
    return false;
}

float UCachedAnimDataLibrary::StateMachine_GetTotalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateArray& CachedAnimStateArray) {
    return 0.0f;
}

float UCachedAnimDataLibrary::StateMachine_GetRelevantAnimTimeRemainingFraction(UAnimInstance* InAnimInstance, const FCachedAnimRelevancyData& CachedAnimRelevancyData) {
    return 0.0f;
}

float UCachedAnimDataLibrary::StateMachine_GetRelevantAnimTimeRemaining(UAnimInstance* InAnimInstance, const FCachedAnimRelevancyData& CachedAnimRelevancyData) {
    return 0.0f;
}

float UCachedAnimDataLibrary::StateMachine_GetRelevantAnimTime(UAnimInstance* InAnimInstance, const FCachedAnimRelevancyData& CachedAnimRelevancyData) {
    return 0.0f;
}

float UCachedAnimDataLibrary::StateMachine_GetLocalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData) {
    return 0.0f;
}

float UCachedAnimDataLibrary::StateMachine_GetGlobalWeight(UAnimInstance* InAnimInstance, const FCachedAnimStateData& CachedAnimStateData) {
    return 0.0f;
}

float UCachedAnimDataLibrary::StateMachine_GetCrossfadeDuration(UAnimInstance* InAnimInstance, const FCachedAnimTransitionData& CachedAnimTransitionData) {
    return 0.0f;
}

float UCachedAnimDataLibrary::StateMachine_GetAssetPlayerTimeRatio(UAnimInstance* InAnimInstance, const FCachedAnimAssetPlayerData& CachedAnimAssetPlayerData) {
    return 0.0f;
}

float UCachedAnimDataLibrary::StateMachine_GetAssetPlayerTime(UAnimInstance* InAnimInstance, const FCachedAnimAssetPlayerData& CachedAnimAssetPlayerData) {
    return 0.0f;
}


