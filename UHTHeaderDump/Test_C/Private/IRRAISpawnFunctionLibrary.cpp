#include "IRRAISpawnFunctionLibrary.h"

UIRRAISpawnFunctionLibrary::UIRRAISpawnFunctionLibrary() {
}

AActor* UIRRAISpawnFunctionLibrary::GetWeightedSpawnPoint(const TArray<AActor*>& Points, const TArray<int32>& Priorities, const TArray<float>& WeightPerPriority) {
    return NULL;
}

int32 UIRRAISpawnFunctionLibrary::GetExpectedPlayerCount(const UObject* WorldContextObject) {
    return 0;
}

int32 UIRRAISpawnFunctionLibrary::GenerateSpawnLocations(UObject* WorldContextObject, FVector Origin, bool bPatrolSpawn, int32 PatrolCountMin, int32 PatrolCountMax, float PatrolRadius, TArray<FVector>& OutSpawnLocations) {
    return 0;
}

int32 UIRRAISpawnFunctionLibrary::GenerateRingSpawnLocations(UObject* WorldContextObject, FVector Origin, int32 Count, float MinRadius, float MaxRadius, TArray<FVector>& OutSpawnLocations) {
    return 0;
}

int32 UIRRAISpawnFunctionLibrary::CalcSpawnCount(UObject* WorldContextObject, int32 EnemyCount, float CoopMultiplicator, int32 ExpectedPlayers) {
    return 0;
}


