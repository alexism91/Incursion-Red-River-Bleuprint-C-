#pragma once
#include "CoreMinimal.h"
#include "IRRAIDifficultyStop.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIDifficultyStop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VariantId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FIRRAIDifficultyStop();
};

