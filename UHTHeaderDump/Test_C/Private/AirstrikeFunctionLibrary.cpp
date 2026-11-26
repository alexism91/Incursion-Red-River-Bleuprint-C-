#include "AirstrikeFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UAirstrikeFunctionLibrary::UAirstrikeFunctionLibrary() {
}

AAirstrike* UAirstrikeFunctionLibrary::SpawnAirstrike(const UObject* WorldContextObject, TSubclassOf<AAirstrike> AirstrikeClass, AActor* TargetActor, FVector TargetLocation, APawn* CalledInBy, float ExtraLaunchDelay, FVector AimOffset) {
    return NULL;
}

void UAirstrikeFunctionLibrary::NotifyStrikeCalledIn(AActor* TargetActor, APawn* CalledInBy) {
}

TArray<FAirstrikeAimPoint> UAirstrikeFunctionLibrary::GetStrikeAimPoints(AActor* TargetActor) {
    return TArray<FAirstrikeAimPoint>();
}

FVector UAirstrikeFunctionLibrary::GetStrikeAimLocation(AActor* TargetActor) {
    return FVector{};
}

bool UAirstrikeFunctionLibrary::CanBeStruck(AActor* TargetActor) {
    return false;
}

TArray<AAirstrike*> UAirstrikeFunctionLibrary::CallInAirstrikeOnTargets(const UObject* WorldContextObject, TSubclassOf<AAirstrike> AirstrikeClass, AActor* TargetActor, FVector TargetLocation, int32 Count, float RippleInterval, float SpreadRadius, float TargetInterval, APawn* CalledInBy) {
    return TArray<AAirstrike*>();
}

TArray<AAirstrike*> UAirstrikeFunctionLibrary::CallInAirstrike(const UObject* WorldContextObject, TSubclassOf<AAirstrike> AirstrikeClass, AActor* TargetActor, FVector TargetLocation, int32 Count, float RippleInterval, float SpreadRadius, APawn* CalledInBy, float ExtraLaunchDelay) {
    return TArray<AAirstrike*>();
}


