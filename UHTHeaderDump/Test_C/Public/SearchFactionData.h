#pragma once
#include "CoreMinimal.h"
#include "SearchFactionData.generated.h"

class AIRRAISearchGrid;

USTRUCT(BlueprintType)
struct TEST_C_API FSearchFactionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIRRAISearchGrid*> ActiveSearchGrids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Faction;
    
    FSearchFactionData();
};

