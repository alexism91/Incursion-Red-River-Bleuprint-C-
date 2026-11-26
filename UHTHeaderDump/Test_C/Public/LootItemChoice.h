#pragma once
#include "CoreMinimal.h"
#include "DefaultItem.h"
#include "LootItemChoice.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FLootItemChoice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefaultItem Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FLootItemChoice();
};

