#pragma once
#include "CoreMinimal.h"
#include "WwiseGroupValueCookedData.h"
#include "WwiseGroupValueCookedDataSet.generated.h"

USTRUCT(BlueprintType)
struct WWISERESOURCELOADER_API FWwiseGroupValueCookedDataSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FWwiseGroupValueCookedData> GroupValues;
    
    FWwiseGroupValueCookedDataSet();
};
FORCEINLINE uint32 GetTypeHash(const FWwiseGroupValueCookedDataSet) { return 0; }

