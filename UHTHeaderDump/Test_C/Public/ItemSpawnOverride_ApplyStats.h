#pragma once
#include "CoreMinimal.h"
#include "CurrentStatItem.h"
#include "ItemSpawnOverride.h"
#include "ItemSpawnOverride_ApplyStats.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UItemSpawnOverride_ApplyStats : public UItemSpawnOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrentStatItem> stats;
    
    UItemSpawnOverride_ApplyStats();

};

