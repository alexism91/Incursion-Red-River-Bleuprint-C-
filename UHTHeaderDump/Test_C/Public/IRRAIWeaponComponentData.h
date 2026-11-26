#pragma once
#include "CoreMinimal.h"
#include "IRRAIWeaponComponentData.generated.h"

USTRUCT(BlueprintType)
struct FIRRAIWeaponComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseAudibleRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PowerLevel;
    
    TEST_C_API FIRRAIWeaponComponentData();
};

