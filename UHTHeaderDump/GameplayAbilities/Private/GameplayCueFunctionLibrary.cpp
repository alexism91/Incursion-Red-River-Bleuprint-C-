#include "GameplayCueFunctionLibrary.h"

UGameplayCueFunctionLibrary::UGameplayCueFunctionLibrary() {
}

void UGameplayCueFunctionLibrary::RemoveGameplayCueOnActor(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters) {
}

FGameplayCueParameters UGameplayCueFunctionLibrary::MakeGameplayCueParametersFromHitResult(const FHitResult& HitResult) {
    return FGameplayCueParameters{};
}

void UGameplayCueFunctionLibrary::ExecuteGameplayCueOnActor(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters) {
}

void UGameplayCueFunctionLibrary::AddGameplayCueOnActor(AActor* Target, const FGameplayTag GameplayCueTag, const FGameplayCueParameters& Parameters) {
}


