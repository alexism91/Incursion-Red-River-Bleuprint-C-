#pragma once
#include "CoreMinimal.h"
#include "ItemSpawnOverride.h"
#include "ItemSpawnOverride_Durability.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UItemSpawnOverride_Durability : public UItemSpawnOverride {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinDurabilityPercentage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaxDurabilityPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString WholeNumberStatName;
    
    UItemSpawnOverride_Durability();

};

