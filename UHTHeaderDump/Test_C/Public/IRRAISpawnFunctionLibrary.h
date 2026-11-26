#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRAISpawnFunctionLibrary.generated.h"

class AActor;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API UIRRAISpawnFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRAISpawnFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static AActor* GetWeightedSpawnPoint(const TArray<AActor*>& Points, const TArray<int32>& Priorities, const TArray<float>& WeightPerPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetExpectedPlayerCount(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GenerateSpawnLocations(UObject* WorldContextObject, FVector Origin, bool bPatrolSpawn, int32 PatrolCountMin, int32 PatrolCountMax, float PatrolRadius, TArray<FVector>& OutSpawnLocations);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GenerateRingSpawnLocations(UObject* WorldContextObject, FVector Origin, int32 Count, float MinRadius, float MaxRadius, TArray<FVector>& OutSpawnLocations);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 CalcSpawnCount(UObject* WorldContextObject, int32 EnemyCount, float CoopMultiplicator, int32 ExpectedPlayers);
    
};

