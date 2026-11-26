#pragma once
#include "CoreMinimal.h"
#include "IRRAIGroupDevSettings.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIGroupDevSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoGrouping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoGroupingDistance;
    
    FIRRAIGroupDevSettings();
};

