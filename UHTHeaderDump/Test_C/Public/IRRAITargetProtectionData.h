#pragma once
#include "CoreMinimal.h"
#include "IRRAITargetProtectionData.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAITargetProtectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ProtectionHeight;
    
    FIRRAITargetProtectionData();
};

